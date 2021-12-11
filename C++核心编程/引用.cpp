#include<iostream>
using namespace std ;
// 引用，给变量起别名 =>   数据类型 &别名 = 原名
// 引用必须初始化   初始化后无法更改=>
//这里指的是指向不可以更改，但是指向的空间的值可以修改

//值传递     (形参不修饰实参)
//地址传递   (指针  ,  形参修饰实参 ) 
//引用传递
void swap(int &a , int &b){
    int tmp = a ;
    a = b ;
    b = tmp;
}

// 引用做函数返回值
// 不要返回局部变量的引用，函数的调用可以作为左值
int& func(){
    static int a = 10 ; // 静态变量，放在全局区
    return a ;          // 这里不用加&
}


int main(int argc, char const *argv[])
{
    int d = 10 , b = 20;
    swap(d,b);             //这里不需要加  &
    cout<<d<<" "<<b<<endl;
    int& c = func();
    cout<<c<<endl;
    func() = 1000;        // 可以作为左值，即令 a = 1000
    cout<<c<<endl;
    c = 600 ;
    cout<<c<<endl;
    return 0;
}


// 引用是指是一个指针常量   int* const a  ==   int &a