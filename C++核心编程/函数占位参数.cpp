#include <iostream>
using namespace std ;
// 函数占位参数
// 占位参数也可以有默认值
int func(int a , int = 10){

}
int main(int argc, char const *argv[])
{
    func(10); // 如果占位参数没有默认值，则必须要传递占位参数的值
    return 0;
}
