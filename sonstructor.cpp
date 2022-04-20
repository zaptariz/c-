#include <iostream>
using namespace std;
class cars
{
    string name = "baggi";
    string type;

public:
    cars(); //default constructor
    cars(cars &system);//copy constructor
    cars(string model, int year); //parameter constructor
    ~cars()
    {
        cout << "delete memory" << endl;
    }
    
    friend void owner(cars fr);
};
void check();
void funct()
{
    cout<<"for check copy constructor"<<endl;
}
int main()
{
    cars c;
    cars d("AUDI", 1999);
    cars f(d);
    check();
    funct();
    owner(c);
    
    //in friend function its must to pass the object
    return 0;
}
cars::cars()
{
    cout << "the car details are:" << endl;
}
cars::cars(string model, int year)
{
    name = model;
    cout << "name:" << name << endl;
    cout << model << endl;
    cout << year << endl;
}
cars::cars(cars &system)
{
    static int num=0;
    cout<<++num<<endl;
    cout << "in the copy constructor" << endl;
    cout << system.name << endl;
    getline(cin, system.type);
    // cout<<system.year<<endl;      //in copy constructor can automatically call when the function end
    cout << "type of car:" << system.type << endl;
}
void owner(cars fr)
{

    cout << fr.name << endl;
    cout << "baggi" << endl;
}
void check()
{
    cout << "destructor checking" << endl<< endl;
}
//in that copy constructor can run without object declaration,
//here in first declered copy constructor to run based on the which object given then finaly the programes copy constructor to be run which predefindly take the default constructor