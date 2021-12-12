#include <iostream>
using namespace std;
class Base{
public:
   int a ;

protected:
   int b ;

private:
   int c ;

};

class Person : public Base{
public:
     int s  ;

};


int main(int argc, char const *argv[])
{
    Person p ;
    // 父类的私有成员属性 是编译器隐藏了 无法访问  但确实被继承了
    cout << "sizeof  Person p :" << sizeof p <<endl ;
    return 0;
}
