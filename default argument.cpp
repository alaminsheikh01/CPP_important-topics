#include<iostream>
using namespace std;

int volume (int a=1, int b=1, int c=1);

int main()
{
    cout<<volume(2,3);

}
int volume (int a, int b , int c)
{
    return a*b*c;
}
