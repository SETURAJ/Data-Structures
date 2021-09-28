#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *newNode=new Node();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* mirror(Node *root)
{
    if(root==NULL)
        return root;
    Node *temp=root->left;
    root->left=root->right;
    root->right=temp;
    if(root->left)
        mirror(root->left);
    if(root->right)
        mirror(root->right);
    return root;
    
}

int main()
{
    Node *root =newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    inorder(root);
    cout<<endl;
    mirror(root);
    inorder(root);
}