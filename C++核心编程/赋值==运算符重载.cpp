#include <iostream>
//C++编译器给一个类添加至少如下4个函数
//构造函数
//析构函数
//拷贝函数
//operator=对属性值进行拷贝

class Person{
 public :
 Person& operator=(Person &p){
     //编译器是否有提供浅拷贝
     //应该先判断是都有属性在堆区，如果有先释放,然后再深拷贝
     if(this->a != NULL){
         delete a;
         a = NULL;
     }
     this->a =  new int(*p.a);

      // 返回对象本本身，实现c == a ==b
      return *this;
 }

  Person(int a){
      this->a = new int(a);
  }

  Person(){

  }

     int *a , b ;

};

int main(int argc, char const *argv[])
{
    /* code */
    Person p1(1) , p2,p3;
    p3  = p2 = p1 ;
    std::cout<<*p2.a<<" "<<*p3.a<<std::endl;
    return 0;
}
