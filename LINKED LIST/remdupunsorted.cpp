//TIME COMPLEXITY O(n)
//Space complexity O(1)

#include<iostream>
#include<bits/stdc++.h>

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
    unordered_set<int> s;
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        if(s.find(curr->data)!=s.end())
        {
            prev->next=curr->next;
            delete(curr);
        }
        else
        {
            s.insert(curr->data);
            prev=curr;
        }
        curr=prev->next;
    }
}
int main()
{
    Node* head=NULL;
    newNode(&head,2);
    newNode(&head,5);
    newNode(&head,8);
    newNode(&head,20);
    newNode(&head,5);
    newNode(&head,7);
    newNode(&head,8);
    newNode(&head,9);
    printlist(&head);
    cout<<endl;
    removedupl(head);
    printlist(&head);
}