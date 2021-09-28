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
void removedupl(Node *head)
{
    if(head==NULL)
        return;
    Node *curr=head;
    Node *next;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            next=curr->next->next;
            free(curr->next);
            curr->next=next;
        }
        else
        {
            curr=curr->next;
        }
    }
}
int main()
{
    Node* head=NULL;
    newNode(&head,2);
    newNode(&head,4);
    newNode(&head,4);
    newNode(&head,28);
    printlist(&head);
    cout<<endl;
    removedupl(head);
    printlist(&head);
}