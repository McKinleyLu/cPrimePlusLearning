#include <iostream>
#include <string>
using namespace std;
// 函数调用运算符重载
class MyPrint{
public:
     // 重载函数定义运算符
     void operator()(string str){
            cout<< str <<endl;
     }

};
// 仿函数非常灵活，没有固定的写法
//加法类
class Myadd{
public:
     int operator()(int a ,int b){
         return a + b ;
     }
    
};
int main(int argc, char const *argv[])
{
    MyPrint my;
    my("hello world");  //由于使用起来非常像一个函数，所以又称仿函数

    Myadd add;
    cout<<add(12,12)<<endl; 

    //匿名函数对象=>Myadd()=>当前行被执行后，对象立即释放
    cout<<Myadd()(100,100)<<endl;
    return 0;
}
