#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};
void printlist(node* n)
{
while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next;
 
    }


}
int main()
{
node* head;//=NULL;
node* second;//=NULL;
node* third;//=NULL;
node* tail;

head= new node;
second =new node;
third = new node;
tail = new node;

head->data=1;
second->data=2;
third->data=3;
tail->data=4;

head->prev=NULL;
head->next=second;

second->prev=head;
second->next=third;

third->prev=second;
third->next=tail;

tail->prev=third;
tail->next=NULL;

printlist(head);
cout<<"second prev"<<second->prev<<endl;
cout<<"second next"<<second->next<<endl;
return 0;
}