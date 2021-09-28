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

int isbst(Node *root,int min,int max)
{
    if(root==NULL)
        return 1;
    if(root->data<min||root->data>max)
        return 0;
    return isbst(root->left,min,root->data)&&isbst(root->right,root->data,max);
}
bool checkbst(Node *root)
{
    return(isbst(root,INT_MIN,INT_MAX));
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
    if(checkbst(root))
        cout<<"True";
    else
        cout<<"False";

    return 0;
}