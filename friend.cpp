#include <iostream>
class base {
private:
    int a;
 
public:
    base() { a = 0; }
    friend class derived; // its is Friend Class
};
 
class derived {
private:
    int b;
 
public:
    void show_base(base& h)
    {
        // "derived" is a friend of "base" it can access private members of "base"
        std::cout << "base::a=" << h.a;
    }
};
 
int main()
{
    base a;
    derived b;
    b.show_base(a);
    return 0;
}