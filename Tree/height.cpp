#include<iostream>
#include<queue>
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



int height(Node *root)
{
    int lheight=0;
    int rheight=0;
    if(root==NULL)
        return 0;
    lheight=height(root->left);
    rheight=height(root->right);
    if(lheight>rheight)
        return lheight+1;
    else
        return rheight+1;
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