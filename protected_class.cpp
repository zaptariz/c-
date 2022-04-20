#include <iostream>
using namespace std;
class one
{
protected:
    int c = 10;

public:
    int a = 5;
    static void funct(one a)
    {
        cout<<"static funct are called"<<endl;
        cout<<a.c<<endl;
    }
};
class two:one
{
public:
two();
~two()
{
  cout<<"cleared"<<endl;  
}
};
int main()
{
    one a;
    cout << a.a << endl;
    one::funct(a);
    two b;
    return 0;
}
two::two()
{
    cout<<a<<"  "<<c<<endl;
}