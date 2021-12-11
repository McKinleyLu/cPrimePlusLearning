#include <iostream>
using namespace std ;

class Person{
   public :
      int a , b , c ;
    Person(int as ,int bs ,int cs) :a(as),b(bs),c(cs){

    }


};

int main(int argc, char const *argv[])
{
    Person p(1,3,16);
    return 0;
}