#include<iostream>
#include<string.h>
using namespace std;
//关系运算符重载
//关系运算符  > < = != 等
class Person{
public:
    string name ;
    int age ;  
    Person(string name , int age){
          this->name = name , this->age = age ; 
    } 

    bool operator==(Person p){
         if(this->name == p.name && this->age == p.age)  {return true;}
         else {return false;}
    }

};
int main(int argc, char const *argv[])
{
    Person p1("zhangsha",12);
    Person p2("zhangsha",12);
    if(p1 == p2) {cout<<"equal"<<endl;}
    else{
        cout << "not equal"<<endl;
    }
    return 0;
}
 