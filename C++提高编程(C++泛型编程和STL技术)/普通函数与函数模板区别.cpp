#include <iostream>
using namespace std;
//1. 普通函数与函数模板区别
//2. 函数模板 用自动类型推导  不可以发生隐式类型转换
//3. 函数模板 用显示指定类型  可以发生隐式类型转换

// 普通函数
int add(int a ,int b){
    return a + b ;
}

//函数模板
template <typename T >
T myadd(T a , T b){
    return a + b ;
}


int main(int argc, char const *argv[])
{
    int a = 10 , b = 15 ;
    char c = 'c' ;
    cout << add(c ,a) <<endl;    // 隐式类型转换

    // 自动类型推导
    //myadd(a,c);    // 错误，不知道T到底是什么类型

    //显示指定类型
    cout << myadd<int>(a,c) << endl;    // 正确

    return 0;
}
