#include "iostream"
class base
{
private:
    int a;
    int b;

public:
    base(int h, int m)
    {
        a = h;
        b = m;
    }
    void operator*()
    {
        std::cout<<"called : "<<"\n";
        b++;
        if (b >= 60)
        {
            a++;
            b -= 60;
        }
    }
    void operator+(int)
    {
        std::cout<<"calledsfad : "<<"\n";
        b++;
        if (b >= 60)
        {
            a++;
            b -= 60;
        }
    }
    void display(){
        std::cout<<a << " : "<< b;
    }
};
int main(){

    base t1(6,58);
    *t1;
    t1+(0);
    t1.display();
}