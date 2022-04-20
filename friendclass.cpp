#include <iostream>
using namespace std;
class one
{
private:
    int a = 20;

public:
    one();
    one(one &ok)
    {
        
        cout<<a<<endl;
        cout<<"i am copy"<<endl;
    }
    friend class two;
};
class two
{
public:
    two(one f);
};
int main()
{
    one c;
    two t(c);
    one f(c);
    return 0;
}
one::one()
{
    cout<<"checking friend class"<<endl;
}
two::two(one f)
{
    cout<<f.a<<endl;
}
//here i am defind friendclass function with copy function 
//while using friend which is must to decleare the object as a argument.
// in function declaration we put class name with object as a parameter