#include <iostream>
using namespace std;
// 函数默认参数
// 如果函数设置 b = 20 ,则b后面的参数都需要默认值
//声明和实现只能有一个默认参数
void func(int a ,int b , int c);
void func(int a, int b = 20 , int c = 15 ){
    cout << a + b + c <<endl;
}
int main(int argc, char const *argv[])
{
    func(10,20,2);
    func(10);
    func(10,15);
    return 0;
}
