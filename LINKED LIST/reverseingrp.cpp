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
Node* reverse(Node *head,int k)
{
    Node *curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
        head->next=reverse(next,k);
    return prev;
}
int main()
{
    Node* head=NULL;
    newNode(&head,1);
    newNode(&head,2);
    newNode(&head,2);
    newNode(&head,4);
    newNode(&head,5);
    newNode(&head,6);
    newNode(&head,7);
    newNode(&head,8);
    int k=4;
    printlist(&head);
    Node *temp=reverse(head,k);
    cout<<endl;
    printlist(&temp);
}