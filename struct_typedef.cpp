#include <iostream>
using namespace std;
struct cars
{
    string name;
    int year;
    double acc;
    string system;
};
void carfun(cars *c);
int main()
{
    cars c1;
    int numberofcars;
    cin >> numberofcars;
    for (int i = 1; i <= numberofcars; i++)
    {
        carfun(&c1);
        cout << c1.name << endl;
    }
    return 0;
}
void carfun(cars *c)
{
    cout << "car name : ";
    cin >> c->name;
}