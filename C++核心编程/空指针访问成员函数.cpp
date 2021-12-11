#include <iostream>
using namespace std ;

class Person{

    public:
       void showClassName(){
           cout<<"this is Person class" << endl;
       }

       int age;
};


int main(int argc, char const *argv[])
{
    /* code */
    Person *p = NULL;
    // 空指针可以访问函数，不可以访问非静态成员
    p->showClassName();  //正确
    
    cout<<p->age<<endl;   //失败
    return 0;
}
