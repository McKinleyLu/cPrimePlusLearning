#include <iostream>
using namespace std;
// const 常函数
// const 常对象

class Person{

    public :
      // this指针是指针常量，不可修改其指向
      // 函数后面的括号再加const ，则指针指向的数据也不可以修改
  
    Person(){

    }

      void showPerson() const{
          // a = 100;    此句不可以运行
      }

      void showPlus(){

      }
   
    int a ;
    mutable int b;   // 特殊变量，加了mutable关键字以后，即使在常函数中，也可以修改

};



int main(int argc, char const *argv[])
{
    const Person p ;  // 常对象
    return 0;

    //常对象只能调用常函数
    p.showPerson();
    //p.showPlus();  这句话无法使用，常对象只能调用常函数

}
