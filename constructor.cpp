 #include<iostream>
 using namespace std;

 class object
 {
 private:
    string name ;

 public:
     object()
     {
         cout<<"This my first programming ";
     }
    void namee(string x)
    {
        name=x;
    }
    string getname()
    {
        return name;
    }
 };

 int main()
 {

     object ob;
     ob.namee("Alamin sheikh ");
     cout<<ob.getname();

 }
