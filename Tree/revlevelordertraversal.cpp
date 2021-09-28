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



void reverseordertraversal(Node * root)
{
    if(root==NULL)
        return;
    stack<Node *>s;
    queue<Node *>q;
    q.push(root);
    while(q.empty()!=true)
    {
        root=q.front();
        s.push(root);
        q.pop();
        if(root->right!=NULL)
            q.push(root->right);
        if(root->left!=NULL)
            q.push(root->left);
    }
    while(s.empty()!=true)
    {
        Node *temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
    }
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

    reverseordertraversal(root);
    return 0;


}