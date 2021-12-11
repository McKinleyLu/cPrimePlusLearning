#include <iostream>
using namespace std ;

// 静态成员函数
// 所有实例共享一个函数
// 静态成员函数只能调用静态成员变量

class Person{
    public :
      int d ,e ,f ;
      static int  a , b , c ;
      static void fun(int as){
          a = as;
          cout<<a<<endl;
      }

       static void func(){
           a = 15 ;
           cout<<a<<endl;
      }


};

//静态成员变量要类内声明。类外初始化
int Person::a = 15 ;

int main(int argc, char const *argv[])
{
    //静态成员变量访问的两种方式
    //1. 通过对象
    Person p1 ;
    p1.fun(12);
    //2. 通过类名
    Person::fun(12);
    return 0;
}
