#include <iostream>
using namespace std ;
//1.引用作为函数重载的条件
void fun(int &a){
    cout << a <<"int &a"<< endl;
}

void fun(const int &a){
   cout<<a<<"const int & a"<<endl;
}


//2. 函数重载碰到默认参数, 出现歧义，不要出现这样的问题，这样不能用
void func(int a ,int b){
    cout<<"int a , int b"<<endl;
}

void func(int a , int b = 10){
    cout<<"int a ,int b = 10"<<endl;
}




int main(int argc, char const *argv[])
{
    int a = 10;
    fun(100);
    fun(a);

    cout<<"==========="<<endl;
    return 0;
}
