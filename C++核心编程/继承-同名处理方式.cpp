#include <iostream>
using namespace std ;
// 访问
class Base{
public:
    Base(){
        a = 100;
    }
   void func(int a)
   {
       this->a = a ;
   }
   void func(){
       cout << a << endl;
   }
    int a ;
};

class Son :public Base{
public:
   Son(){
       a = 200 ;
   }
   void func(int a)
   {
       this->a = a ;
   }
    int a ;
};

int main(int argc, char const *argv[])
{
    /* code */
    Son son ;
    cout << son.a<<endl;
    // 如果通过子类对象访问父类中的同名成员，需要加上域
    cout<<son.Base::a<<endl;
    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
    //如果想访问到父类中被隐藏的同名成员函数，需要加作用域
    son.Base::func(100);


    return 0;
}
