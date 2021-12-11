#include <iostream>
using namespace std;
// 封装
class Circle
{
private:
    /* data */
public:
    int m_r ;
    int lr ;
    
    //行为 
    double cal(){
        return 2*3.14*m_r;
    }

    void setLR(int lrs){
        lr = lrs ;
    }
};

// public权限  成员在类内可以访问  类外可以访问


// protected  成员在类内可以访问   类外不可以访问  儿子可以访问父亲保护的内容


// private    成员在类内可以访问   类外不可以访问  儿子不可以访问父亲的私有内容


// 如果什么都不些，默认是私有成员
class Person{
   public:
      string m_name  ;
      void func(){
          m_name =  "zhangsan";
          m_car  =  "BSJ";
          m_pwd  = 123;
      }       

   protected:
       string m_car ;

   private:
      int m_pwd;


};



int main(int argc, char const *argv[])
{
    // 实例化: 通过一个类，创建一个对象
    Circle c1 ;
    c1.m_r = 12 ;
    cout<<c1.cal()<<endl;
    c1.setLR(12);

    Person p1 ;
    p1.m_name = "wangwu";   //只有public可以访问

    return 0;
}
