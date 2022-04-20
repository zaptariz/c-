#include <iostream>
using namespace std;


int a = 0;
int find_closest_number(string data);
int main()
{
    string numbers = {"2,5,-1,3,4,1"};
    find_closest_number(numbers);
}
int find_closest_number(string num)
{
    int start = num[0];
    int length = num.size();

    for (; a <= length; a++)
    {
        if (start <= num[a])
            cout << " this is the out : " << num[a];
        else
            cout << "";
    }
}