#include <iostream>
using namespace std;
// int size=10;
#define size 10
class student
{
private:
    int m1;
    int m2;
    int m3[10];

public:
    student() //copy constructor
    {
        m1 = 0;
        m2 = 0;
        cout << "i am consructor" << endl;
        for (int i = 0; i < size; i++)
        {
            m3[i] = i;
        }
    }
    student(int a, int b) //parameter constructor
    {
        m1 = a;
        m2 = b;
    }
    student operator++() //incremental
    {
        student s; //not necessery
        ++m1;
        ++m2;
        return s; //not necessery
    }
    student operator-() //unitory overload
    {
        --m1;
        --m2;
    }
    student operator+(const student &a) //binary overload
    {
        //student mark;                                              // m1=m1+a.m1;
        //cout<<m1<<", "<<m2<<endl;                                //  m2=m2+a.m2;
        //mark.
        m1 = m1 + a.m1; //  return student(m1,m2);  //this also possible
                        // mark.
        m2 = m2 + a.m2;
        return student(m1, m2);
    }
    bool operator>(const student &a) //relational overload
    {
        if (m1 > a.m1)
        {
            return true;
        }
        return false;
    }

    friend istream &operator>>(istream &input, student &a) //input overload
    {
        cin >> a.m1 >> a.m2;
    }
    friend ostream &operator<<(ostream &output, student &a) //output overload
    {
        cout << a.m1 << " " << a.m2 << endl;
    }
    void operator=(const student &a) //equal operator
    {
        m1 = a.m1;
        m2 = a.m2;
    }
    student operator()(int a, int b, int c) //function call overload
    {
        student mar;
        mar.m1 = a + b + m1;
        mar.m2 = b + c + m2;
        return mar;
    }

    int &operator[](int i)
    {
        if (i > size)
        {
            cout << "i is out of arry" << endl;
            return m3[0];
        }
        else
        {
            return m3[i];
        }
    }
    void getmark() //normal function inside class
    {
        static int execution = 0;
        cout << "number of execution=:" << ++execution << " ;" << endl;
        cout << m1 << " " << m2 << endl;
    }
    void relationfun(student mark1) //like struct type to get value by object(variable)
    {
        cout << "mark(" << m1 << ") is greater then mark1(" << mark1.m1 << ")" << endl;
    }
};
int main()
{
    student mark(85, 57); //parameter constructor
    -mark;                //unitory overload
    mark.getmark();

    ++mark; //logical overload
    mark.getmark();

    student mark1(80, 75);
    mark1.getmark();

    student totalmark;
    totalmark = mark + mark1; //binary overload
    totalmark.getmark();

    if (mark > mark1) //relational overload
    {
        mark.relationfun(mark1);
    }
    else
    {
        cout << "mark1(m1) is greater then mark(m1)" << endl;
    }

    student getmark;
    cin >> getmark;  //input overload
    cout << getmark; //output overload
    getmark.getmark();

    //asignment operator used to change the objects value permanently incause if we use again means in give the change data
    mark = totalmark; //eaual operator
    mark.getmark();
    //function call operator overload

    mark = mark1(10, 15, 45); //here in m1 and m2 tacken by which object be pass to the function call process
    mark.getmark();
    //array overloading
    student data;
    cout << "The array of m3[3]"
         << " : " << data[14] << endl;

    return 0;
}