#include <iostream>
using namespace std;
//访问自己的同名静态成员 =>  直接访问
//访问父类的同名静态成员 =>  加上作用域即可
class Base{
public :
    static  int a ;
 
};
int Base::a = 15  ;

class Son : public Base{
public :
    static  int a ; 
};
int Son::a = 26  ;


int main(int argc, char const *argv[])
{
    Son son;
    // 1. 通过对象访问
    cout<<son.a<<endl;
    cout<<son.Base::a<<endl;
    // 2. 通过类名访问
    cout<<Son::a<<endl;
    cout<<Son::Base::a<<endl;
    return 0; 
}
