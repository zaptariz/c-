#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)
struct employe{
	int age;
	char name;
	int sal;
	float exp;
};

int main()
{
	struct employe *detail;
	detail=(struct employe*)malloc(sizeof(struct employe));
	printf("[%d]\n",sizeof(struct employe));
	return 0;
}
