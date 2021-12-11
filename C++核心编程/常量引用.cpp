#include <iostream>
using namespace std ;
void showvalue(int& a){
   a = 1000;
}

void showvalue(const int& b){
   b = 1000; //不可修改，这样就不能通过形参修改实参了
}

int main(int argc, char const *argv[])
{
    const int & ref  = 10;
    // <==> int tmp = 10 , const int & ref = tmp;
    // 并且值不可以使用修改

    int a = 10;
    showvalue(a);
    cout<<a<<endl;

    return 0;
}
