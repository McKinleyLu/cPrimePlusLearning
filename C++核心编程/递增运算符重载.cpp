#include <iostream>
using namespace std ;
//递增运算符重载  ++
// 前置递增返回的是引用，后置递增返回的是值
class MyAdd{
    friend ostream & operator<<(ostream &cout , MyAdd my);
    //重载前置++运算符
   public: 
    MyAdd& operator++(){
        number++;
        return *this;
    }
    // 重载后置++运算符
    //MyAdd& operator++(int)    int代表占位参数，用于区分前置和后置
    MyAdd  operator++(int){    //注意，局部对象不能返回引用
           //先  记录当前结果
           MyAdd tmp = *this;
           // 后 递增s
           number++;
           //最后返回记录结果
           return tmp;

    }
    private:
       int number;
};


ostream & operator<<(ostream &cout , MyAdd my){
    cout<<my.number<<endl;
    return cout;
}

int main(int argc, char const *argv[])
{
    MyAdd my;
    cout << ++(++my) <<endl;
    cout<< my++ <<endl;
    cout << my<<endl;
    return 0;
}
