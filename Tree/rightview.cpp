#include<iostream>
#include<queue>
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
    Node *newNode=new Node();
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

void printrightview(Node *root)
{
    if(root==NULL)
        return;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
            Node *temp=q.front();
            q.pop();
            if(i==n)
                cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->right=newNode(8);
    printrightview(root);
    return 0;
}