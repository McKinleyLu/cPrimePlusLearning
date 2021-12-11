#include <iostream>
#include <string>
using namespace std;

// 希望私有属性可以在外面被使用

// ======全局函数做友元=========
class Building{

    public :
    friend void good(Building *building); // 添加friend变成友元函数
    Building(string a , string b ){
        this->a = a , this->b =  b ;
    }
      string a ;
   private:
      string b ;
};


// 全局函数
void good(Building *building){
    cout<<building->a <<"  " <<building->b<<endl;
}


// ======  类做友元 =======
class Person{

   public:
        void visit();
        Person();
        Cuba  *cuba;

};


class PersonAdmian{
   public :
       PersonAdmian();
       void visit();     // 成员友元函数
       void visits();    //非成员友元函数

       Cuba *cuba;
   
};


class Cuba{
    friend class Person;                      // Person是本类好朋友，可以访问本类的私有属性
    friend void  PersonAdmian::visit();       // PersonAdmian下的函数visit是好朋友，可以访问私有成员
    public:
       Cuba();
       int a;
    private:
       int b;
};




PersonAdmian::PersonAdmian(){
     cuba = new Cuba;
}

void PersonAdmian::visit(){
    cout<<cuba->a<<"  "<<cuba->b<<endl;     // visit()是友元函数，可以输出私有变量b
}

void PersonAdmian::visits(){                // visits()是非友元函数，不可以输出私有变量b
     cout<<cuba->a<<endl; 
}





// 类外写成员函数
Cuba::Cuba()
{
     a = 12;
     b = 15 ;
}

Person::Person(){
      cuba = new Cuba;
}

void Person::visit(){
    cout<<"visit:"<<cuba->a<<"  "<<cuba->b<<endl;  // 可以访问公用内容
}







int main(int argc, char const *argv[])
{
    Building building("room","space");
    good(&building);


    Person p ;
    p.visit();
    return 0;
}
