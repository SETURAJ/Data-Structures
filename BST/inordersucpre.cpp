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

int findsucc(Node *root,int value)
{
    Node *temp=root;
    if(root->left)
        temp=temp->left;
    else
        return -1;
    return temp->data;
}

void succ_pre(Node *root,Node *&pre,Node *&suc,int value)
{
    if(root==NULL)
        return;
    while (root!=NULL)
    {
        if(root->data==value)
        {
            if(root->right)
            {
                suc=root->right;
                while(suc->left)
                    suc=suc->left;
            }
            if(root->left)
            {
                pre=root->left;
                while(pre->right)
                    pre=pre->right;
            }
            return;
        }
        else if(root->data<value)
        {
            pre=root;
            root=root->right;
        }
        else
        {
            suc=root;
            root=root->left;
        }
    }
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
    root=insert(root,80);
    Node *pre=NULL,*suc=NULL;
    succ_pre(root,pre,suc,50);
    cout<<pre->data<<" "<<suc->data;
    cout<<endl;
    
}