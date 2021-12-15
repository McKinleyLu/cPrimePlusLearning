#include <iostream>
using namespace std;
//如果想执行，让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进绑定
//地址晚绑定
//动态多态

//动态多态条件
//1. 有继承关系
//2. 重写父类虚函数(重写指函数返回值、参数列表、名称全部相同)

//动态多态使用: 父类的指针或引用 执行子类对象

class Animal{
public:
    // 虚函数
    virtual  void speak(){
        cout << "animal is speaking" <<endl;
    }    
    
};


class Cat:public Animal{
    void speak(){
        cout << "cat is speaking" <<endl;
    }
};

void doSpeak(Animal &animals){   
     animals.speak();
}


int main(int argc, char const *argv[])
{
    /* code */
    Cat cats;
    doSpeak(cats);   // 输出cat is speaking
                    
    return 0;
}
