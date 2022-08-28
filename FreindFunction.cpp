#include <bits/stdc++.h>
using namespace std;
class B;
class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }

    friend void fun(A,B);

};

class B
{
    int b;
    public:
    B(int x)
    {
        b=x;
    }

    friend void fun(A,B);
};

void fun(A obj1,B obj2)
{
   cout<<obj1.a+obj2.b<<" ";
}
int main() 
{
    A d(100);
    B c(200);

    fun(d,c);
}
