#include <iostream>
using namespace std;

class Person{
public:
    Person(){

    }

    Person(int ages , int height){
        age = ages;
        heignt = new int(height);   //堆区开的数据，必须程序员手动释放，因此在析构函数内去释放
    }

    ~Person(){
     if(heignt != NULL){
         delete heignt ;
     }
   
    }
    
    Person(const Person & p){
        age = p.age;
        //深拷贝，使得指针不指向同一个内存空间
        int height = *p.heignt;
        heignt = new int(height);
    }
    
    int age ;
    int *heignt;
};


int main(int argc, char const *argv[])
{
    Person p1(12,13);
    Person p2 = p1 ; // 浅拷贝，带来了堆区数据重复释放，因为两个heignt指针同指向一个空间，析构时内存被释放了两次
    // 使用浅拷贝带来的问题 => 自己写拷贝构造函数，实现深拷贝
    return 0;
}
