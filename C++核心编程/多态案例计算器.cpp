#include <iostream>
using namespace std ;
// 多态写法实现计算器
class AbstractCaluator{
public:
   virtual int getResult(){
       return 0;
   }

    int number1 , number2 ;
};

//加法计算器类
class AddCaluator: public AbstractCaluator{
public:
   virtual int getResult(){
       return number1 + number2;
   }
};

int main(int argc, char const *argv[])
{
    //多态使用条件
    // 父类指针或引用指向子类对象
 
    AbstractCaluator *add = new AddCaluator();
    add->number1 = 12 , add->number2 = 15 ;
    cout << add->getResult() <<endl;
    delete add ;
    return 0;
}
