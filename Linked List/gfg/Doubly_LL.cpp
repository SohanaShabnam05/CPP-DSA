#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        next = NULL;
        prev = NULL;
    }
};

Node* insertatBegin(Node* head, int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    if(head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}

Node* insertEnd(Node* head, int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }

    Node* curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node* delHead(Node* head)
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
    else
    {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}

void print(Node* n)
{
    while(n != 0)
    {
        cout<<n->data<<"<->";
        n = n->next;
    }
}

int main(){
     Node* head = NULL;
    head = insertatBegin(head,30);
    head = insertatBegin(head,20);
    head = insertatBegin(head,10);
    head = insertEnd(head,40);
    head = delHead(head);
    print(head);
    return 0;
}