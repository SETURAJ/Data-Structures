#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
};
Node *newNode(int value)
{
    Node *root= new Node();
    root->data=value;
    root->left=root->right=NULL;
    return root;
}
//void inorder(Node *root)
//{
//    if(root==NULL)
//        return;
//    inorder(root->left);
//    cout<<root->data<<" ";
//    inorder(root->right);
//}
bool countsubtree(Node *root,int &count)
{
    if(root==NULL)
        return true;
    bool left=countsubtree(root->left,count);
    bool right=countsubtree(root->right,count);
    if(left==false || right==false)
        return false;
    if(root->left && root->data!=root->left->data)
        return false;
    if(root->right && root->data!=root->right->data)
        return false;
    count++;
    return true;
}
int unival(Node *root)
{
    int count=0;
    countsubtree(root,count);
    return count;
}
int main()
{
    Node *root=newNode(0);
    root->left=newNode(1);
    root->right=newNode(0);
    root->right->left=newNode(1);
    root->right->right=newNode(0);
    root->right->left->right=newNode(1);
    root->right->left->left=newNode(1);
    //inorder(root);
    cout<<unival(root);
    return 0;

}