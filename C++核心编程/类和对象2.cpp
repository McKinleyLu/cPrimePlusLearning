#include <iostream>
#include <string>
using namespace std ;

class Person{
   public:
       void setName(string names){
           name = names;
       }
       
       string getName(){
           return name;
       }
     
   private :
       string name ;
       int    age;
       string lo ;
};


int main(int argc, char const *argv[])
{
    Person p ;
    p.setName("zhangshan");
    cout<<p.getName()<<endl;
    return 0;
}
