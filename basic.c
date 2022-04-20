#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;

	head 	= (struct node *)malloc (sizeof (struct node *));
	second 	= (struct node *)malloc (sizeof (struct node *));
	third 	= (struct node *)malloc (sizeof (struct node *));

	head->data = 10;
	head->link = second;

	second->data = 20;
	second->link = third;

	third->data = 30;
	third->link = NULL;

	printf ("address of head [%x]\n",head->link);
	printf ("value of head   [%d]\n",head->data);

	printf ("address of second [%x]\n",second->link);
        printf ("value of second   [%d]\n",second->data);

	printf ("address of third [%x]\n",third->link);
        printf ("value of third   [%d]\n",third->data);
	return (0);
}
