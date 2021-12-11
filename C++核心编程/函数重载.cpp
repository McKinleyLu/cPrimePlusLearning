#include <iostream>
using namespace std ;
// 1. 同一个作用域下
// 2. 函数名相同
// 3. 函数参数类型不同  或个数不同  或顺序不同
// 提高复用性
// ！！！！ 函数返回值不能作为函数重载的条件
void func(){
    cout << "yes"<<endl;
}

void func(int b , double a){
    cout<<a<<endl;
}

void func(double a , int b){
    cout<<a<<endl;
}



int main(int argc, char const *argv[])
{
    func();
    func(10.2,12);
    func(12.1,1);
    return 0;
}
