#include <iostream>
using namespace std;
// 继承中构造和析构顺序
// 父类构造 => 子类构造 => 子类析构 => 父类析构
class Base{
public:
   Base(){
       cout << "base 构造函数" <<endl;
   }

   ~Base(){
       cout << "base 析构函数" <<endl;
   }

};


class Son : public Base{
public:
    Son(){
        cout << "Son 构造函数" <<endl;
    }
    ~Son(){
        cout << "Son 析构函数" <<endl;
    }
};



int main(int argc, char const *argv[])
{
    Son son;
    return 0;
}
