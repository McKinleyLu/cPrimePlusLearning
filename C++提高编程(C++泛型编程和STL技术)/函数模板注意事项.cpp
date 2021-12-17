#include <iostream>
using namespace std ;
// 函数模板注意事项
// 1.自动推导类型，必须推导出一致的数据类型T才可以使用
// 2.模板必须确定出T的数据类型，才可以使用
template <typename T >
void mySwap(T &a , T &b){
    T temp = a ;
    a = b ;
    b = temp;
}
template <typename T >
void func(){
    cout << "func调用" << endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    int a = 12 , b = 15 ;
    char c = 'a' ;
    mySwap(a,b);
   // mySwap(a,c);   // 错误，两个数据的类型必须一致
   // func();        // 错误，不知道func中T是什么类型
    func<int>();     // 正确，指定了T的类型
    return 0;
}
