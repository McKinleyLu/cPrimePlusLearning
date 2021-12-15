#include <iostream>
using namespace std;
//静态多态
//地址早绑定  在编译阶段确定函数地址
class Animal{
public:
    void speak(){
        cout << "animal is speaking" <<endl;
    }    
    
};


class Cat:public Animal{
    void speak(){
        cout << "cat is speaking" <<endl;
    }
};

void doSpeak(Animal &animals){   
     animals.speak();  //animal is speaking
}


int main(int argc, char const *argv[])
{
    /* code */
    Cat cats;
    doSpeak(cats);   // 父类引用接收子类对象
                     // C++允许父类指向子类对象
    return 0;
}
