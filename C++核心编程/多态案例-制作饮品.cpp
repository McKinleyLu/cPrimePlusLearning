#include <iostream>
using namespace std;
class Drink{
public:
   virtual void water() = 0 ;
   virtual void material() = 0 ;
   virtual void cup() = 0 ;
};

class Coffee :public Drink{
   void water(){
       cout << "Coffee" << " ";
   }
   void material(){
       cout << "coffee beans" <<" ";
   }
   void cup(){
       cout << "Black" << endl;
   }
};



class Tea : public Drink{
   void water(){
       cout << "Tea" << " ";
   }
   void material(){
       cout << "Leaves" <<" ";
   }
   void cup(){
       cout << "Green" << endl;
   }
};

int main(int argc, char const *argv[])
{
    Drink *tea = new Tea;
    tea->water(), tea->material() ,tea->cup();
    Drink * coffee = new Coffee;
    coffee->water(),coffee->material(),coffee->cup();
    delete tea ;
    delete coffee;
    return 0;
}
