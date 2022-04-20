#include<iostream>
using namespace std;
#pragma pack(1)
struct stu{
    char c;
     int b;
    char a;
   }val;
int main()
{
    int a=546;
cout<<sizeof(val)<<endl;
cout<<sizeof(a)<<endl;
return 0;
}