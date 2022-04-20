#include <iostream>
using namespace std;
uint64_t function(uint64_t x, uint64_t y)
{
    cout << x << " " << y << " " << endl;
    return (x, y);
}
float function(float x, float y, float z)
{
    cout << x << " " << y << " " << z << " " << endl;
    return (x, y, z);
}
string function(string x, string y, string z)
{

    cout << x << " " << y << " " << z << " " << endl;
    return (x, y, z);
}
int main()
{
    function(65, 21);
    function(21.21f, 22.1f, 35.64f);
    function("hello", "hey", "hi");

    return 0;
}