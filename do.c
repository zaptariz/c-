#include <stdio.h>
int multiple(int n);
int main()
{
    int number, result;
    printf("enter the number : ");
    scanf("%d", &number);
    multiple(number);
    result = multiple(number);
    printf("\nresult is  sum = %d",multiple(result));
}
int multiple(int n)
{
    if (n != 0)
        
    return n * multiple(n - 1);

    else 
    return n;
}