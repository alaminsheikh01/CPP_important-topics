#include<iostream>
using namespace std;
int main()
{
    string s1("Hi my name is alamin sheikh i love baconand ham ! ");
    cout<< s1 <<endl;
    s1.erase (26);
    s1.replace (14,5,"(alamin)");
    cout <<s1 <<endl;
}

