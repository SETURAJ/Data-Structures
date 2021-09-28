//Move last element of the list to the front

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void newNode(Node **head,int data)
{
    Node *new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;
    if(*head==NULL)
        *head=new_node;
    else
    {
        Node *temp=*head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=new_node;
    }
}

void printlist(Node *head)
{
    if(head==NULL)
        return;
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node** lasttofront(Node **head)
{
    if(*head==NULL)
        return NULL;
    Node *node=*head;
    Node *prev=NULL;
    Node *curr=*head;
    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    if(prev==NULL)
        return head;
    prev->next=NULL;
    curr->next=*head;
    *head=curr;
    return head;
}
int main()
{
    Node *head=NULL;
    newNode(&head,1);
    //newNode(&head,2);
    //newNode(&head,3);
    //newNode(&head,4);
    //newNode(&head,5);
    printlist(head);
    cout<<endl;
    lasttofront(&head);
    printlist(head);

}