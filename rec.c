// // // // #include <stdio.h>
// // // // int sum(int n);
// // // // int pad(int, ...){}
// // // // int main()
// // // // {
// // // //     int number, result;
// // // // pad(1,2,3,4,5,6);
// // // // pad(1,2,3,4,5,6,7,8,9);
// // // //     printf("Enter a positive integer: ");
// // // //     scanf("%d", &number);

// // // //     result = sum(number);

// // // //     printf("sum = %d", result);
// // // //     return 0;
// // // // }

// // // // int sum(int n)
// // // // {
// // // //     if (n != 0)
// // // //     {

// // // //         printf("this is n value : %d\n", n);
// // // //         return n + sum(n - 1);                  //recursive function
// // // //     }

// // // //     else
// // // //     {
// // // //         printf("this is n ");
// // // //         return n;
// // // //     }
// // // // }
// // // // // int pad(int, ...)
// // // // // {
// // // // //     printf("thi is the values : %d",f)
// // // // // }
// // // #include <stdio.h>
// // // int add(int a, int b); //prototype  && function declaration
// // // int main()// program start here
// // // {
// // //     add(10, 15); // function calling

// // //     return 0;
// // // }
// // // int add(int a, int b) // function definition  && 2 arguments and parameters passed in the funtion
// // // {
// // //     int sum;
// // //     sum = a + b;
// // //     printf("this is sum : %d\n", sum);
// // // }
// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <string.h>
// // int main()
// // {
// //     char *a;
// //     char *ip;
// //     ip = malloc(50 * sizeof(char));
// //     // a = malloc(10 * sizeof(char));
// //     strcpy(a, "manikandan,j");
// //     printf("%d", a);
// // }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {

//    char name[100];
//    char *description;

//    strcpy(name, "Zara Ali");

//    /* allocate memory dynamically */
//    description = calloc( 200 * sizeof(char) );

//    if( description == NULL ) {
//       fprintf(stderr, "Error - unable to allocate required memory\n");
//    } else {
//       strcpy( description, "Zara ali a DPS student in class 10th");
//    }

//    printf("Name = %s\n", name );
//    printf("Description: %s\n", description );
// }
#include <stdio.h>
int main(char name[], char *a[])
{
    if (name != 0)
    {
        printf("\nname is %s\n\n", name[1]);
    }
    else if (name >=10)
    {
        printf("Too many arguments supplied.\n");
    }
    else if (name ==0)
    {
        printf("One argument expected.\n");
    }
}
