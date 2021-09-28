#include<iostream>
#include<math.h>
using namespace std;

class Node{
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

int find_len(Node *head)
{
    Node *temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

int add(Node *head)
{
    int len=find_len(head);
    Node *temp=head;
    int res=0;
    while(temp!=NULL)
    {
        int data=temp->data;
        res+=pow(10,len-1)*data;
        len--;
        temp=temp->next;
    }    
    return res+1;
}

int main()
{
    Node *head=NULL;
    newNode(&head,1);
    newNode(&head,5);
    newNode(&head,7);
    newNode(&head,8);
    newNode(&head,5);
    cout<<add(head);
    return 0;
}