#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[10]="Blockchain";
	int a=0,b=0,k=0;
	b=strlen(str)-1;
	while(b>a)
	{
		k=str[a];
		str[a]=str[b];
		str[b]=k;
		a++;
		b--;
	}
		printf ("[%s]\n", str);
	
	return(0);
}
