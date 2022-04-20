#include<iostream>
 int a;
extern void func();
int main()
{
    a=5;
   func();
   return 1;
}