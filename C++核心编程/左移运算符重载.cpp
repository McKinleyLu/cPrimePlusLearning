#include <iostream>
using namespace std;

//左移运算符重载  
class Person{
  friend ostream & operator<<(ostream &out , Person p );
  // 加友元是为了让函数可以访问私有成员
  public:
    Person(int a , int b ){this->a = a , this->b = b ;}   
  private:    
    int a ,  b ;
};
//利用成员函数重载 左移运算符operator<<(cout)  这是不对的
//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
//因此只能使用全局函数重载左移运算符
//用引用传cout，因为cout全局只有一个
ostream & operator<<(ostream &out , Person p ){
    cout<<p.a<<"  "<<p.b<<endl;
    return cout;
}


int main(int argc, char const *argv[])
{
    Person p(12,13) ;
    cout<<p<<endl;   // 没有与这些操作数匹配的 "<<" 运算符 -- 操作数类型为:  std::ostream << PersonC/C++(349)
                     //重载左移运算符以后，可以使用该语句
    return 0; 
}
