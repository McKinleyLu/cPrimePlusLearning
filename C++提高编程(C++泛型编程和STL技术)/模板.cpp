#include <iostream>
using namespace std;
//泛型编程技术  模板
//函数模板语法

//实现两个整型交换函数
template <typename T >  // 声明一个模板。告诉编译器T为通用类型

void myswap(T &a , T & b){
    T temp = a ;
    a = b ;
    b = temp ;
}


int main(int argc, char const *argv[])
{
    int a = 15 , b = 12 ;
    cout << "orinal: "  << a  << "  " << b  << endl;
    myswap(a,b);
    cout << "swap: "  << a  << "  " << b  << endl;
    return 0;
}
