#include <iostream>
using namespace std;
class student
{
protected:
    int m1 = 0;
    int m2 = 0;

public:
    virtual int addition(int x, int y)
    {
        int z = x + y;
        return z;
    }
    int total(int x)
    {
        return x;
    }
    void function()
    {
        cout<<"i am a base class"<<endl;
    }
};
class staff : public student
{
public:
    int addition(int x, int y)
    {
        int z = y;
        return z;
    }
    int total(int x)
    {
        return (x-10);
    }
};
int main()
{
    student *mark;
    staff check;
    mark=&check;

    cout << mark->addition(10, 20) << endl;
    cout<<mark->total(450)<<endl;
    cout<<check.total(450)<<endl;
    check.function();
    return 0;
}