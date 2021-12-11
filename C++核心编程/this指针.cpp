#include <iostream>
using namespace std;
// this 指针指向被调用的成员函数所属的对象
// this指针隐含在每一个非静态成员函数内的一种指针
// this无需定义，直接使用即可

class Person{
   public:
      Person(int age){
          // this指针隐含在每一个非静态成员函数内的一种指针
          // 这里this指向p1
          this->age = age ;
      }

      Person& PersonAddAge(Person &p2){  //如果不是Person& , 返回Person则编译器会创造一个拷贝对象，不再是P2本身了
           this->age += p2.age;
           return *this;
      }

    int age ;
};
int main(int argc, char const *argv[])
{
    Person p1(18);
    cout<<p1.age<<endl;
    // 返回对象本身用*this
    Person p2(15);
    Person p3(16);
    p2.PersonAddAge(p3).PersonAddAge(p3).PersonAddAge(p3);  //链式编程思想
    cout<<p2.age<<endl;
 

    return 0;
}
