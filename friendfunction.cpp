#include <iostream>
using namespace std;
class one
{
private:
    int a = 5;
    int b = 7;

public:
    int c = 10;
    void check();
    friend void calculation(one cal);
};
int main()
{
    one value;
    value.check();
    cout<<"c :"<<value.c<<endl;
    calculation(value);
    return 0;
}
void one::check()
{
    cout<<a<<endl<<b<<endl<<c<<endl;
}
void calculation(one cal)
{
    int add=cal.a+cal.b;
    cout<<add<<endl;
}