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
    Node *newnode=new Node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

int height(Node *root)
{
    if(root==NULL)
        return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);

    return 1+max(lheight,rheight);
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

    cout<<height(root);
    return 0;


}