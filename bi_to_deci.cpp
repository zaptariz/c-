#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int value =0;
    bitset<10>num (string("111001"));
    cout<<num.to_ulong()<<endl;
    char ascii[4]={36,65,69,66};
    for(int i=0;i<4;i++)
    {
        cout<<ascii[i]<<endl;
    }
    string hex="3133293B7827ED422EA95FF7E6B92145FAA6A22DE1896043F457306AF4CF5B42";
    cout<<hex.length()<<endl;
    bitset<8>val (85);
    cout<<val<<endl;
    return 0;
}