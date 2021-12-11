#include <iostream>
#include <string>
using namespace std;
//当其他类是本类成员变量时，首先构造其他类对象，再构造自身

class Phone{
   public:
      string m_phone;
      Phone(string m_phones):m_phone(m_phones){
         cout<<"Phone构造函数调用"<<endl;
      }


};



class Person{
   public:
      string m_name;
      Phone m_pname;
     Person(string names , string pnames):m_name(names),m_pname(pnames){
       //相当于隐式转换法  Phone p = names
       cout<<"Person构造函数调用"<<endl;
     }
};



int main(int argc, char const *argv[])
{
    Person p("wangwu","Max");
    cout<<p.m_pname.m_phone<<endl;
    return 0;
}
