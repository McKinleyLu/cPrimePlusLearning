#include <iostream>
using namespace std ;
class Cuba{
   public:

    int a ;
    int b ;


      Cuba(){

      }

      Cuba(int as){
          a = as ;
      }

      Cuba(const Cuba &c){

      }

    
      void dowork(Cuba c){
        cout<<c.a<<endl;
      } 

      Cuba value(){
          Cuba C ;
          return C ;   //注意，这里返回的不是这个函数内创建的C，而是一个副本(返回时再创建一个一模一样的C)
      }

    ~Cuba(){


    }




};


int main(int argc, char const *argv[])
{
    //1. 值传递的方式给函数参数传值
    Cuba c(10);
    c.dowork(c);
    return 0;
    //2. 值方式返回局部对象
    Cuba cs  = c.value();
}
