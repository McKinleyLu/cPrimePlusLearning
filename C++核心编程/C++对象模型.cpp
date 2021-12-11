#include <iostream>
using namespace std ;
//在C++中，成员变量和成员函数分开存储

class Person{
};

class Persons{
    public :
     

  
    int a;
    static int b ;
};

int Persons:: b = 15 ;

void test1(){
    Person p ;
    //空对象占用空间为
    //原因: C++编译器会给每一个空对象分配一个字节，是为了区分对象有独一无二的内存位置
    cout<<"sizeof p :" << sizeof(p)<<endl;    
}


void test2(){
    Persons p ;
    //如果不是空的，则有几个成员变量，就占几个内存
    //静态成员、静态成员函数、非静态成员函数均不属于类对象上的空间
    cout<<"sizeof p :" << sizeof(p)<<endl;    
}


int main(int argc, char const *argv[])
{
    test1();
    test2();
    return 0;
}
