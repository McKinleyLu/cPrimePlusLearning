#include <iostream>
using namespace std;
// C++允许一个类继承多个类
class Base1{
public:
   void func(){
       cout << "base1"<<endl;
   }
   int a , b ;
};

class Base2{
public:
   void func(){
       cout << "base2"<<endl;
   }
   int a , b ;
};

class Son : public Base1 , public Base2{
public :
    void func(){
        cout << "son" <<endl;
    }
    int a , b ;  
};



int main(int argc, char const *argv[])
{
    Son son ;
    cout << "son size :" << sizeof son <<endl;
    son.Base1::func();
    return 0;
}
