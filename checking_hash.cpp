#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    string a="69925feef25bf6342967a22d8f1ac9b00d6977b246fc885e230dfaf1a3e2d648";
    string b="69925feef25bf6342967a22d8f1ac9b00d6977b246fc885e230dfaf1a3e2d648";
    if(a==b)
    {
        cout<<"same";
    }
    else{
        cout<<"not same";
    }
cout<<endl;
    bitset<32> temp (1935766113);
    cout<<temp<<endl;

    if("0111001101100000111001001100001"=="01110011011000010111001001100001")
    {
        cout<<"same binary";
    }
    int num=0x54267;
    cout<<num<<" num"<<endl;
    bitset<32>ok (string("1110011011000010111001001100001"));
    cout<<ok.to_ulong()<<endl;
    return 0;
}