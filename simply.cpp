#include <iostream> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 
void printList(Node* n) 
{ 
    //cout<<n<<endl;
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 
int main() 
{ 
    Node* head ;
    Node* second;// = NULL; 
    Node* third;// = NULL; 
  

    head = new Node; 
    second = new Node; 
    third = new Node;

  //cout<<sizeof(head)<<endl;
    head->data = 1;
    head->next = second; 
  
    second->data = 2; 
    second->next = third; 
  
    third->data = 3; 
    third->next = NULL; 
  
    printList(head); 
  
    return 0; 
} 