#include <iostream>
using namespace std;
// 1.创建一个类，C++编译器会给每一个类都添加至少三个函数
// 默认构造(空实现)
// 析构函数(空实现)
// 拷贝函数(拷贝值)


// 如果自己写了拷贝函数，编译器不在提供其他的构造函数
// 如果自己写了默认构造函数，编译器不再提供默认构造函数，但是还提供拷贝构造函数
//也就是说，如果自己写了拷贝函数，其他两个函数必须自己添加
class Person{
public:
      Person(){

      }

      ~Person(){

      }
    
    /**
     * @brief 
          Person(const Person & p){   //拷贝构造函数
              age = p .age;
          }
      
     */


    int age ;

};



int main(int argc, char const *argv[])
{
    Person p ;
    p.age = 18 ;
    Person p2 (p);
    cout<<p2.age<<endl;


    return 0;
}
