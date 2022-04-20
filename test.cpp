#include <iostream>
#include <sstream>
using namespace std;
int j = 0;

string name[] = {"mohammed", "nowfil", "lenin", "kumar", "mathan", "kumar", "baggi", "kevin"};

void functionreverse(int x, int y)
{
    string rev[y];

    for (int z = ((name[x].length()) - 1); z >= 0; z--)
    {
        rev[j] = name[x].c_str()[z];
        cout << rev[j];
        j++;
    }
    cout << " ";
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
}
int main()
{
    int len = 0;
    string rev[len];
    for (int i = 0; i <= (sizeof(name) / sizeof(name[0])); i++)
    {

        len += name[i].length();
    }
cout<<"length"<<len<<endl;
    for (int i = 3; i ; i = (i + 4)) //i=3;i<size;i+4                0 2 1 3 4 6 5 7 8 10 9 11 12 14 13 15 15
    {
        i = i - 3;
         cout << i << endl;                                                           //i-3 i+2 i-1 i+2
        functionreverse(i, len);

        i = i + 2;
        cout << i << endl;
        functionreverse(i, len);

        i = i - 1;
        cout << i << endl;
        functionstraight(i, len);

        i = i + 2;
        cout << i << endl;
        //cout<<"hello"<<endl;
        if (i <= (sizeof(name) / sizeof(name[0])))
        {
            functionstraight(i, len);
        }
        else
        {
            break;
        };
    }
    return 0;
}
