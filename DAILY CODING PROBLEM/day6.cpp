#include<bits/stdc++.h>
using namespace std;
/* Simple List
class Node{
    public:
        int data;
        Node *next;
};
Node *newNode(int value)
{
    Node *temp=new Node();
    temp->data=value;
    temp->next=NULL;
    return temp;
}
void Insert(Node **root,int value)
{
   Node *newnode=newNode(value);
   Node *temp=*root;
   if(*root==NULL)
    {
        *root=newnode;
        return ;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newnode;
    return;
}
int findindex(Node **root,int value)
{
    if(*root==NULL)
        return 0;
    Node *temp=*root;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->data==value)
            return count;
        count++;
        temp=temp->next;
    }  
    return 0;
}
int main()
{
    Node *head=newNode(1);
    Insert(&head,2);
    Insert(&head,3);
    Insert(&head,4);
    Insert(&head,5);
    Node *temp=head;
    while(temp!=NULL)
      {
            cout<<temp->data<<" ";
            temp=temp->next;
      }      
      cout<<endl;
      cout<<findindex(&head,5);
    return 0;
}*/
class Node
{
    public:
        int data;
        Node *xpn;
    Node(int value)
    {
        this->data=value;
    }
};
class xor_list
{
    public:
        

};

int main()
{
    Node *head=new Node(1);

}