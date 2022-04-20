#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,n;
    string arr[10]={"0","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    if(1<=a && a<=9)
    {
        for(a;a<=b;a++)
        {
            if(a<=9)
            {
                cout<<arr[a]<<endl;
                continue;
            }
            if(a%2==0)
            {
                cout<<"even"<<endl;
                continue;
            }
            else
            {
                cout<<"odd"<<endl;
                continue;    
            }
        }
    }
    return 0;
}