#include<iostream>
using namespace std ;
int *func(){
    int *p = new int(10);
    return p ;
}

int *funcarray(){
    int* ar  =new int[10]; 
    for(auto i = 0 ; i < 10 ;i++)  ar[i] = i;
    return ar ;
}
int main(int argc, char const *argv[])
{
    int * p = func();
    cout<<*p<<endl;
    //堆区数据用deletefree
    delete p ;
    p = funcarray();
    for(int i = 0; i < 10 ; ++i) cout<<p[i]<<endl;
    // 释放数组加 []
    delete[] p ;
    return 0;
}
