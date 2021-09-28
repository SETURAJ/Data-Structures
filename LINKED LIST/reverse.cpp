//TIME COMPLEXITY O(n)
//Space complexity O(1)

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
void newNode(Node** head,int data)
{
    
    Node *new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        
    }
    else
    {
        Node *temp=*head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=new_node;
    }
}
void printlist(Node **head)
{
    Node *temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverse(Node **head)
{
    Node *prev=NULL;
    Node *curr=NULL;
    Node *next=NULL;
    curr=*head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}
int main()
{
    Node* head=NULL;
    newNode(&head,85);
    newNode(&head,15);
    newNode(&head,4);
    newNode(&head,10);
    printlist(&head);
    reverse(&head);
    cout<<endl;
    printlist(&head);
}