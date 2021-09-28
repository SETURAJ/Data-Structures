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

void deleteloop(Node *first,Node * head)
{
    Node *ptr1;
    Node *ptr2;
    ptr1=head;
    while(1)
    {
        ptr2=first;
        while(ptr2->next!=ptr1&&ptr2->next!=first)
                ptr2=ptr2->next;
        if(ptr2->next==ptr1)
            break;
        ptr1=ptr1->next;
    }
    ptr2->next=NULL;

}
int detectloop(Node *head)
{
    Node *first=head;
    Node *last=head;
    while(first && last&& last->next)
    {
        first=first->next;
        last=last->next->next;
        if(first==last)
        {
            deleteloop(first,head);
            return 1;
        }
    }
    return 0;
   
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
int main()
{
    Node* head=NULL;
    newNode(&head,1);
    newNode(&head,2);
    newNode(&head,3);
    newNode(&head,4);
    newNode(&head,5);
    head->next->next->next->next->next=head;
    detectloop(head);
    printlist(&head);
  
}