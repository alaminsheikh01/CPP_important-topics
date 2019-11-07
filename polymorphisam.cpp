#include<iostream>
using namespace std;
class A{
    int a;
 public:
     void display()
     {
         cout<<"this a A ";
     }
};

class B:public A
{
    int b;
public:
    void display()
    {
        cout<<"this a B ";
    }
};
int main()
{
    B ob;
    ob.a();
}
