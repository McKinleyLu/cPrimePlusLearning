#include<iostream>
using namespace std ;
//纯虚函数    无需写实现 比虚函数更好用
//纯虚函数语法   virtual + 返回值类型 + 函数名 + (参数列表) = 0 即可
//当类中有纯虚函数时，这个类也称为抽象类

// 抽象类特点
// 无法实例化对象
// 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
class Base{
public :
   // 纯虚函数
    virtual void func() = 0 ;

};

class Son: public Base{
  void func(){
      cout << "Son" << endl;
  }

};


int main(int argc, char const *argv[])
{
    Base *son = new Son;
    son->func();
    return 0;
}
