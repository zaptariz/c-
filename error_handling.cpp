#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char filename[]="/home/leninkumar/Downloads/exercies/desktop/boot/bootstrap.signed";
    if(remove(filename)!=0)
    perror("file not deleted");
    else
    perror("file available and its  deleted");
    return 0;
}