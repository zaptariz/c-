#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string name[6] = {"mohammed", "nowfil", "lenin", "kumar", "mathan", "kumar"};
    string rev[100];
    int j = 0;
    for (int i = ((name[0].length())-1); i >=0; i--)
    {
        
        rev[j] = name[0].c_str()[i];
        //cout<<"rev["<<j<<"]"<<rev[j]<<endl;
        j++;
        
    }
   for (int i = ((name[2].length())-1); i >=0; i--)
    {
        rev[j] = name[2].c_str()[i];
       // cout<<"rev["<<j<<"]"<<rev[j]<<endl;
        j++;
       
    }
     for (int i =0 ; i <=((name[1].length())-1); i++)
    {
        rev[j] = name[1].c_str()[i];
        //cout<<"rev["<<j<<"]"<<rev[j]<<endl;
        j++;
      
    }
     for (int i =0 ; i <=((name[3].length())-1); i++)
    {
        rev[j] = name[3].c_str()[i];
       // cout<<"rev["<<j<<"]"<<rev[j]<<endl;
        j++;
        
    }
    for (int i = ((name[4].length())-1); i >=0; i--)
    {
        rev[j] = name[4].c_str()[i];
       // cout<<"rev["<<j<<"]"<<rev[j]<<endl;
        j++;
       
    }
    for (int i =0 ; i <=((name[5].length())-1); i++)
    {
        rev[j] = name[5].c_str()[i];
       // cout<<"rev["<<j<<"]"<<rev[j]<<endl;
        j++;
        
    }
    int len;
   for(int i=0;i<(sizeof(name)/32);i++)
   {
       
       len+=name[i].length();
   }
    for(int i=0;i<len;i++)
    {
        cout<<rev[i];
    }
    return 0;
}