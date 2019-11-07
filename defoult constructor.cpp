#include<iostream>
using namespace std;

class Account
{
public:
    int account ;
    string name ;
    static int  count;

    Account (int account, string name )
    {
        this->account =account;
        this->name =name;
        count++;


    }
    void display()
    {
        cout<<"output the value "<<name <<"  "<<account<<endl;
    }
};
int Account::count=0;
int main()
{    Account a1 =Account(201, "Sanjay");
     Account a2=Account(202, "Nakul");
     Account a3=Account(203, "Ranjana");
     a1.display();
     a2.display();
     a3.display();

     cout<<"count of employees "<<Account::count <<endl;

}
