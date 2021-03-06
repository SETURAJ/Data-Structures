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
    Node *newnode=new Node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}



void levelordertraversal(Node * root)
{
    if(root==NULL)
        return;
    queue<Node *>q;
    q.push(root);
    while(q.empty()!=true)
    {
        Node *node=q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
    }

}

int main()
{
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    levelordertraversal(root);
    return 0;


}