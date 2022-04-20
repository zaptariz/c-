#include <iostream>
using namespace std;
class one
{
protected:
    int num;
    int value;

public:
    int multiple(int a, int b)
    {
        num=a;
        value=b;
        cout<<num*value<<endl;
        return num*value;
    }
    int add(int a, int b)
    {
        cout<<num<<endl;
        num=a;
        value=b;
        cout<<num+value<<endl;
        return num+value;
    }
};
class two:public one
{
private:
    int x;
    int y;

public:
    void subraction()
    {
        int sub;
        sub=num-value;
        cout<<sub<<endl;
    }
};
int main()
{
two t;
one f;//
t.multiple(10,20);
t.add(20,30);
t.subraction();
return 0;
}
