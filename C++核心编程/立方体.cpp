#include <iostream>
using namespace std;

class Cube{
    public:
      void setHeight(int heights) { height = heights;}
      void setWide(int wides)     {wide  = wides;}
      void setLong(int longs)     {Long = longs;}


      int getHeight()  { return height;}
      int getWide()    {return wide   ;}
      int getLong()    {return  Long ;}

      int getSquare()   {return height * wide * Long ;}
      int getManJi()    {return height*4 + wide*4 + Long*4;} 
 
      bool isSame(Cube &c){
          if(c.getHeight() == height && c.getLong() == Long && c.getWide() == wide)  {return true;}
          else {return false;}
              
      }


    protected:

    
    
    private:
       int height;
       int wide;
       int Long;
 
};

int main(int argc, char const *argv[])
{
    Cube c1 ;
    c1.setHeight(10),c1.setLong(10),c1.setWide(20);
    cout<<c1.getHeight()<<endl;
    cout<<"Square:"<<c1.getSquare()<<endl;
    Cube c ;
    c.setHeight(15),c.setLong(10),c1.setWide(5);
    if(c1.isSame(c) == false)    {cout<<"not same"<<endl;}
    else
        cout<<"same"<<endl;
    return 0;
}
