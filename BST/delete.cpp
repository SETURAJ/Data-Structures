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

Node *find_succ(Node *root)
{
    Node *curr=root;
    while(curr && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

Node* deletenode(Node* root,int value)
{
    if(root==NULL)
        return root;
    if(value>root->data)
        root->right=deletenode(root->right,value);
    else if(value<root->data)
        root->left=deletenode(root->left,value);
    else
    {
        if(root->left==NULL && root->right==NULL)
            return NULL;
        else if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp=root->left;
            free(root);
            return temp;
        }
          Node *temp=find_succ(root->right);
    root->data=temp->data;
    root->right=deletenode(root->right,temp->data);
    }
    return root;

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
    inorder(root);
    cout<<endl;
    root=deletenode(root,50);
    inorder(root);

}