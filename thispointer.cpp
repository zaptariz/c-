#include<iostream>
using namespace std;
class one
{
    int num;
    public:
    void check(int num)
    {
        this->num=num;
        cout<<this->num<<endl;
        cout<<num<<endl;
    }
    void value()
    {
        int add;
        add=10+num;
        cout<<add<<endl;
    }
};
int main()
{
    one c;
    c.check(25);
    c.value();
    return 0;
}