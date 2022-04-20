#include <iostream>
#include <sstream>
using namespace std;
int j = 0;

string name[] = {"mohammed", "nowfil", "lenin", "kumar", "mathan", "kumar","baggi"};    //0 2 1 3 4 6 5

void functionreverse(int x, int y, int f)
{

    string rev[y];

    for (int z = ((name[x].length()) - 1); z >= 0; z--)
    {

        rev[j] = name[x].c_str()[z];

        cout<< rev[j];
        j++;
    }
   cout << " ";
   //return rev[j];
}
void functionstraight(int x, int y)
{
    string rev[y];
    for (int z = 0; z <= ((name[x].length()) - 1); z++)
    {

        rev[j] = name[x].c_str()[z];

        cout << rev[j];
        j++;
    }
    cout << " ";
   // return rev[j];
}
int main()
{
    int len = 0;
    string rev[len];
    for (int i = 0; i <= (sizeof(name)/sizeof(name[0])); i++)
    {

        len += name[i].length();
    }

    for (int i = 0; i < (sizeof(name) / sizeof(name[0])); i++)
    {
        if (i % 2 == 0)
        {
            functionreverse(i, len,0);
        }
        else
        {

            functionstraight(i, len);
        }
    }
// for(int i=0;i<len;i++)
// {
//     cout<<rev[i];
// }

    return 0;
}