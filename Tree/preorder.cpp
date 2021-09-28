#include<iostream>
#include<stack>
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
    Node *newnode=new Node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}



void preorder(Node * root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}



int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    preorder(root);
    cout<<endl;
    
    return 0;


}