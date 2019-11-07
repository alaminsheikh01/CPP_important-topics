#include<iostream>
using namespace std;
class cat{
 public:
     void c()
     {
         cout<<"cating..... "<<endl;
     }
};
class dog:public cat
{
public:
    void d()
    {
        cout<<"doging....."<<endl;
    }
};
class human:public dog
{
public:
    void h()
    {
        cout<<"humaning ....."<<endl;
    }
};

int main(void)
{
    human h1;
    h1.c();
    h1.d();
    h1.h();
}
