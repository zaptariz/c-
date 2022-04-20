#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>val(15,10);
    cout<<val.size()<<endl;
    for(int i=0;i<5;i++)
    {
        val.push_back(i);
    }
    cout<<val.size()<<endl;
    for(int i=0;i<val.size();i++)
    cout<<val[i]<<" ";
    cout<<endl;
   // cout<<val.begin()<<endl;
    return 0;
}