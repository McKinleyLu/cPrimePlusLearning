#include <iostream>
using namespace std;
class Animal{
public:
    Animal(){
        cout << "Animal构造函数" << endl; 
    }
     virtual void speak()= 0 ;
    // 利用虚析构解决 父类指针释放子类对象时内存泄露问题
   virtual ~ Animal(){
       cout << "Animal 析构函数" <<endl;
   }

   // virtual ~ Animal() = 0 ;   // 纯虚析构  
   // 在下面加如下代码进行实现
};

/*
Animal ~Animal(){
    cout << "Animal 纯虚析构实现" <<endl;
}*/

class Cat : public Animal{
public :
   Cat(string name){
      cout << "cat 构造函数"  <<endl;
      this->name = new string(name) ;
   }
    void speak(){
        cout << *this->name<<":" << "小猫在说话" <<endl;
    }   
    string *name ; 

    ~Cat(){  //父类指针在析构时，不会调用子类析构函数，导致内存泄露，这是在父类析构函数中添加virural关键字
        if(this->name != NULL) {
            delete this->name ;
            this->name = NULL;
            cout << "cat 小猫析构了" <<endl;
        }
    }
};
int main(int argc, char const *argv[])
{
    Animal *cat = new Cat("Tom");
    cat->speak();
    delete cat ;
    return 0;
}
