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

int height(Node *root,int &ans)
{
    if(root==NULL)
        return 0;
    int lheight=height(root->left,ans);
    int rheight=height(root->right,ans);
    ans=max(1+lheight+rheight,ans);
    return 1+max(lheight,rheight);
}

int diameter(Node *root)
{
    if(root==NULL)
        return 0;
    int ans=INT_MIN;
    height(root,ans);
    return ans;
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

    cout<<diameter(root);
    return 0;


}