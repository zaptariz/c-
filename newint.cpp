#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int num=25;
    cout<<ptr<<endl;
    //ptr=new int;
    ptr=&num;
    cout<<*ptr<<endl;
    cout<<ptr[0]<<endl;
    return 0;
}