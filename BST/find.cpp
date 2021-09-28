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

bool find(Node *root,int value)
{
    if(root->data==value)
        return true;
    if(value>root->data)
        return find(root->right,value);
    else
        return find(root->left,value);
    
}

int main()
{
    Node *root=NULL;
    root=insert(root,50);
    insert(root,20);
    insert(root,70);
    insert(root,10);
    insert(root,30);
    insert(root,90);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    if(find(root,80))
        cout<<"Present";
    else
        cout<<"Not present";
}