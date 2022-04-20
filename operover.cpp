#include <iostream>
using namespace std;
class student
{
private:
    int m1;
    int m2;

public:
    // student(int x, int y)
    // {

    //     m1 = x;
    //     m2 = y;
    // }
     void function()
    {
        cout << "i am a base class" << endl;
    }
    // bool operator<(student &mark2)
    // {
    //     if (m1 < mark2.m1)
    //     {
    //         return true;
    //     }
    //     else if (m1 == mark2.m1 && m2 < mark2.m2)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
};
class staff : public student
{
public:
    
    void function()
    {
        cout << "i am a derived class" << endl;
    }
};

int main()
{
    staff *obj2;
    student obj1;
    obj2= &obj1;
    // staff ok;
    // obj= &ok;
    obj2->function();
    // student mark(41, 38), mark2(41, 51);
    // if (mark < mark2)
    //     cout << "mark is less then mark2 \n";
    // else
    //     cout << "mark is greater then mark2 \n";
    
    return 0;
}