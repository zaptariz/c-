#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int number;
	
	printf("enter the value : ");
	scanf("%d",&number);
	if(a == NULL)
	{
		printf("memory is zero");
	}
	else
	{
		printf("memory is there");
	}
	a=(int *)malloc(number * sizeof(int));

	if(a == NULL)
        {
                printf("\nmemory is zero");
        }
	else
	{
		 printf("\nmemory allocated\n");
	}

	for(int i=0;i<number;++i)
	{
		printf("%u\n",a+i);
	}
free(a);	
//	printf("the alocated value : ");
//	a=(int *)realloc(a,(number+1)*sizeof(int));
//	a[number]=10;
	for(int i=0;i<=number;++i)
	{
		printf("%u\n,",&a[i]);
	}


	return 0;
}

