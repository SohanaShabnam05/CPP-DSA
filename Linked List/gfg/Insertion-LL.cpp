#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node (int x)
    {
        data = x;
        next = NULL;
    }
};

Node* insertBegin(Node* head, int x)
{
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}

Node* insertEnd(Node* head, int x)
{
    Node *temp = new Node(x);
    if(head == NULL)
    {
        return temp;
    }

    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;

    return head;
}

Node* delHead(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        Node*temp = head->next;
        delete head;
        return temp;
    }
}

Node* delLast(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node* curr = head;
    while(curr->next->next != NULL)
    {
        curr = curr -> next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
}

Node* InsertPos(Node* head, int pos, int data)
{
    Node* temp = new Node(data);
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    for(int i=1; i<=pos-2 && curr!=NULL; i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    {
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

void print( Node* n)
{
    while(n!=0)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main(){
    Node* head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);
    head = insertEnd(head,40);
   // head = delHead(head);
   // head = delLast(head);
    head = InsertPos(head,2,3);
    
    print(head);
    return 0;
}