#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// 文件流类
// 文本文件   -> 以ASCII码形式存储在计算机中
// 二进制文件 ->  文本以二进制方法存储在计算机中
// ofstream 写操作
// ifstream 读操作
// fstream  读写操作
class Person{
public :
      char name[60];
      int  age;    
};
int main(int argc, char const *argv[])
{
    /* code */

    /*
       ios ::   in 为读文件而打开文件
               out 为写文件而打开文件
               ate 初始位置，文件尾
               app 追加方式写文件
             trunc 如果文件存在先删除，再创建
            binary 二进制文件 

        打开方式可以使用或运算符   联合使用
    */



    //创建流对象
    //写文件
    ofstream ofs  ;
    ofs.open("test.txt",ios::out);
    ofs << "写入数据" << endl;
    ofs << "张飞   蜀国" << endl;
    ofs << "曹操   东汉" << endl;
    ofs.close();


    //读文件
    ifstream reads ;
    reads.open("test.txt",ios::in);
    //判断文件是否打开成功
    if(!reads.is_open())   {cout<<"文件打开失败";return -1 ;}
    /*读文件四种方式
     1.char buffer[1024] = {0};
       while(reads >> buf) { cout << buffer << endl;}
     2.char buffer[1024] = {0};
       while(reads.getline(buffer sizeof buffer)) {cout << buffer << endl;}
     3.string buf ;
       while(getline(reads,buf)){cout <<buf << endl;}
     4.char c ;  //文件里的数据一个一个读     不推荐此读方式
       while((c = reads.get()) != EOF) {cout << c << endl;}    
    */
    reads.close();



    
   //二进制文件读取
   fstream fs ;
   //打开文件
   fs.open("person.txt",ios::in | ios::binary);
   if(!fs.is_open())   {cout << "文件创建失败" << endl; return - 1 ;}
   Person p = {"张三",18};
   //写数据
   // 第一个参数是 const char *  第二个参数是count
   fs.write((const char*)&p , sizeof(p));
   fs.close();

   //读文件
   
   //第一个参数是char * , 第二个参数是int len
   //fs.read();
   Person ps ;
   ifstream ifs("person.txt",ios::out | ios::binary);
   if(!ifs.is_open())  {cout << "文件打开失败" << endl ; return - 1;}
   ifs.read((char*)&ps , sizeof(Person) );
   cout << ps.age << " " << ps.name <<endl;
    return 0;
}
