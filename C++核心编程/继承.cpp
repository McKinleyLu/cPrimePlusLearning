#include <iostream>
using namespace std;


class base{
public:
    void header(){
         cout<<"sa,we,qw"<<endl;
    }    

    void left(){
        cout << "C++学习视频" << endl;
    }

};

// 继承
// 好处： 减少重复代码
// 语法 class 子类(派生类) : 继承方式 父类(基类)
// 继承过来的称为共性, 自己独有的成为个性
class Java: public base {
public:
    void content(){
        cout << "Java学科视频" <<endl;
    }
};

class Python:public base{
public:
   void python(){
        cout << "python视频"<<endl;
   }
};
int main(int argc, char const *argv[])
{
    Java  java ;
    java.content();
    Python python;
    python.python();

    return 0;
}
