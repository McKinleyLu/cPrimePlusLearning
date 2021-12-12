#include <iostream>
using namespace std;
/**
 * @brief 
 * 
 * 构造函数、析构函数如果自己不写，系统会自己做一个空的
 * 
 */
class Cuba{
   public:
 
     int as;
     int bs;




    // 构造函数    
    // 无返回值、与类名相同、可以重载、实例化对象时自动调用
    Cuba(){
       cout<<"构造函数"<<endl;
    }

    Cuba(int a , int b){
       this->as = a;
    }

    Cuba(int a){
       as = a;
    }
      //拷贝构造函数
         Cuba(Cuba &c){
            as = c.as , bs = c.bs ;
         }
   
    //析构函数
    //执行清理工作
    //函数名子 ==  ~ + 类名
    //不可以有参数、不可以重载
    //对象销毁前自动调用
  
     ~ Cuba(){
        cout<<"析构函数"<<endl;
     }
      

   protected:


   private:

};

int main(int argc, char const *argv[])
{
   // 调用
   // 1. 括号
    Cuba c1;                   //默认
    Cuba c2(22,15);
    Cuba c3(c2);

    Cuba c4();             //不要使用括号法创建无参对象，这被认为是函数声明
                           // C++ 允许在函数中声明函数
   
   // 2 .显示法
    Cuba p1 = new Cuba(12,13);  //有参构造
    Cuba p2 = Cuba(c2);     //拷贝构造
   
    Cuba(12,15);            //匿名对象

   // 3. 隐式转换法
   Cuba p3 = c2;
   Cuba p4 = 12 ;


    return 0;
}
