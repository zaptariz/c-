#include<iostream>
using namespace std;
int length;
void function(int y=10)
{
    length=y;
    cout<<length<<endl;
}
int main()
{
    int a=5;
    function(5);
    return 0;
}