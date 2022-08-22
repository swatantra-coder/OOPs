#include <iostream>
using namespace std;
class Distance
{
   private: 
   int distance;

   public:
   void getdata(int a)
   {
       distance=a;
   }
   void display()
   {
       cout<<distance<<endl;
   }
   
   //operator overloading
   Distance operator+(Distance d2)
   {
       Distance d;
       d.distance=distance + d2.distance;

       return d;
   }

};


//Function overloading
int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}
int main() 
{
   Distance d1,d2,d3;
   
   d1.getdata(100);
   d2.getdata(200);
   
   //operator overloading 
   d3=d1+d2;
   d3.display();
   d1.display();
   d2.display();

   //function overloading
   cout<<sum(10,2)<<" "<<sum(10,2,1)<<endl;
   return 0;
    
}
