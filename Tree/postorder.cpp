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



void postorder(Node * root)
{
    if(root==NULL)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}



int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    postorder(root);
    cout<<endl;
    
    return 0;


}