#include "iostream"
#include <string>
#include <string.h>
#include <vector>
using namespace std;
int i;
int count;
int main()
{
    std::string enter_name;
    std::cout << "enter the any string    : ";
    getline(std::cin, enter_name);
    cout <<      "enter how many copy     : ";
    vector<string> *total = new vector<string>();
    cin >> count;
    for (int i = 0;
         i <= count;
         i++)
    {
        total->push_back(enter_name);
    }
    for (auto begin = total->begin(); begin != total->end(); begin++, i++)
        std::cout  << " copy count : "<< i << "  copy of the text is : "<<*begin<< "\n";
    return 0;
}