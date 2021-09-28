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
Node * detectloop(Node *head)
{
    Node *first=head;
    Node *last=head;
    while(first && last&& last->next)
    {
        first=first->next;
        last=last->next->next;
        if(first==last)
            break;
    }
    if(first!=last)
        return NULL;
    first=head;
    while(first!=last)
    {
        first=first->next;
        last=last->next;
    }
    return first;
}
int main()
{
    Node* head=NULL;
    newNode(&head,1);
    newNode(&head,2);
    newNode(&head,3);
    newNode(&head,4);
    newNode(&head,5);
    head->next->next->next->next->next=head;
    Node *temp=detectloop(head);
    if(temp==NULL)
        cout<<"Cycle not Found";
    else
        cout<<temp->data;
  
}