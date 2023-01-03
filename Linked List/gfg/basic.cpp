#include <iostream>
using namespace std;

struct  Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void print(Node* n)
{
    while(n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    //2nd method
    // Node *head = new Node(10);
    // head -> next = new Node (20);
    // head -> next -> next = new Node (30);
    
    print(head);

    return 0;
}