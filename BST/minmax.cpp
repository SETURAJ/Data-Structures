#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
};

Node* newNode(Node *root,int data)
{
    Node *new_node=new Node();
    new_node->data=data;
    new_node->left=new_node->right=NULL;
    return new_node;
}

Node* insert(Node *root,int value)
{
    if(root==NULL)
    {
        return newNode(root,value);
    }
    if(value>root->data)
    {
        root->right=insert(root->right,value);
    }
    else
    {
        root->left=insert(root->left,value);
    }
    return root;
}

void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int min(Node *root)
{
    if(root==NULL)
        exit(1);
    Node *temp=root;
    while(temp &&temp->left!=NULL)
        temp=temp->left;
    return temp->data;
}

int max(Node *root)
{
    if(root==NULL)
        exit(1);
    Node* temp=root;
    while(temp&& temp->right!=NULL)
        temp=temp->right;
    return temp->data;
}

int main()
{
    Node *root=NULL;
    root=insert(root,50);
    root=insert(root,20);
    root=insert(root,70);
    root=insert(root,10);
    root=insert(root,30);
    root=insert(root,90);
    root=insert(root,40);
    root=insert(root,60);
    root=insert(root,90);
    cout<<min(root)<<endl;
    cout<<max(root)<<endl;
    return 0;
}