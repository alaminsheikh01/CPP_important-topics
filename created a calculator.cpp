#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout<<"Enter a first number : ";
    cin>>num1;

    cout <<"Enter a second number : ";
    cin>>num2;

    cout<<"Enter a operator [+ or - or * or / ] :";
    cin>>op;

    switch(op)
    {
    case '+':
        cout <<"addition ["<<num1<<" + "<<num2<<"] : "<< num1+num2<<endl;
        break;

    case '-':
        cout <<"substation ["<<num1<<" - "<<num2<<"] : "<< num1-num2<<endl;
        break;

    case '*':
        cout <<"multiplication ["<<num1<<" * "<<num2<<"] : "<< num1*num2<<endl;
        break;

    case '/':
        cout <<"division ["<<num1<<" / "<<num2<<"] : "<< num1/num2<<endl;
        break;

    default:
        cout <<"Enter your number is Error !!";
        break;
    }
}
