#include <iostream>
using namespace std;
struct S
{
    
    int b;
    char a;
} ll;

#pragma pack(push, 1)

struct SP
{
    int e;
    int b;
    float g;
    char a='lenin';
    string x="lenin";
    // int b;
    // int t;
    // bool y;
    // char d;

} ss;
int main()
{

    cout << sizeof(S) << endl;
    cout << sizeof(SP) << endl;
    cout << "this trace for charecter a : "<<ss.a<< endl;
    cout << "this trace for string x : "<<ss.x<< endl;

    // cout<<sizeof(ss.a)<<endl;
    // cout<<sizeof(ll.b)<<endl;

    return 0;
}
int lenin(){
    
extern int hi=5;
}