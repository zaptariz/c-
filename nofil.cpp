#include <iostream>
#include <sstream>
using namespace std;
int j = 0;
string name[6] = {"mohammed", "nowfil", "lenin", "kumar", "mathan", "kumar"};
void functionreverse(int x, int y)
{

    string rev[y];
    for (int i = ((name[x].length()) - 1); i >= 0; i--)
    {

        rev[j] = name[x].c_str()[i];
        cout << rev[j];
        j++;
    }
    cout << " ";
}
void functionstraight(int x, int y)
{
    string rev[y];

    for (int i = 0; i <= ((name[x].length()) - 1); i++)
    {

        rev[j] = name[x].c_str()[i];
        cout << rev[j];
        j++;
    }
    cout << " ";
}
int main()
{
    int len = 0;
    string rev[len];
    for (int i = 0; i <= (sizeof(name) / 32); i++)
    {

        len += name[i].length();
    }

    for (int i = 0; i < (sizeof(name) / 32); i++)
    {
        if (i % 2 == 0)
        {
            if (i == 0)
            {
                functionreverse(i, len);
                
            }
            if (i == 2)
            {
                functionreverse(i, len);
            }
        }
        else
        {
            if (i == 1)
            {
                continue;
            }
            if (i == 3)
            {
                i = 1;
                functionstraight(i, len);
            }
            if (i == 5)
            {
                i = 3;
                functionstraight(i, len);
            }
        }
    }

    return 0;
}