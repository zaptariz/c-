#include<iostream>
using namespace std;
class one
{
    public:
    int width=5;
    
};
class two:one
{
    public:
    void check();
};
int main()
{
    one o;
    two f;
    cout<<o.width<<endl;
    f.check();
    return 0;
}
void two::check()
{
    cout<<width<<endl;
}