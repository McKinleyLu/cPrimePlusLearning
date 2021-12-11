#include <iostream>
using namespace std;
/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int
 * 
 *   对于内置数据类型，编译器知道如何进行运算
 * 
 *   通过自己写成员函数，实现两个对象相加属性后返回新的对象
 * 
 *   通过成员函数、全局函数重载加号运算符
 * 
 *  
 */

class Person{

public:  
   Person operator+ (Person &p2){ // 通过成员函数进行重载
       Person tmp(12,13) ;
       tmp.a = this->a + p2.a;
       tmp.b = this->b + p2.b;
       return tmp ;
   }

   Person(int a ,int b);

   int a , b , c ;

};

Person:: Person(int a , int b){
     this->a = a , this->b = b;
}


Person operator- (Person & p1 , Person & p2){
    Person tmp(12,13) ;
    tmp.a = p1.a - p2.a;
    tmp.b = p1.b - p2.b;
    return tmp ;
}



int main(int argc, char const *argv[])
{
    // 1 .通过成员函数进行重载
    Person p1(10,10) , p2(12,12);
    Person addPerson = p1 + p2 ;
    cout<<addPerson.a<<endl;

    //2.通过全局函数进行重载
    Person p3(10,10) , p4(12,12);
    Person subPerson =  p3 - p4 ;
    cout<<subPerson.a<<endl;


    return 0;
}
