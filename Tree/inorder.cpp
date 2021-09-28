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



void inorder(Node * root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void iterative(Node* root)
{
    if(root==NULL)
        return;
    stack<Node *>s;
    Node *temp=root;
    while(s.empty()!=true||temp!=NULL)
    {
        while(temp!=NULL)
        {
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}

int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    inorder(root);
    cout<<endl;
    iterative(root);
    return 0;


}