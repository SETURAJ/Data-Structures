#include<iostream>
#include<bits/stdc++.h>
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

void topview(Node *root)
{
    if(root==NULL)
        return;
    map<int,int>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(q.empty()!=true)
    {
        Node *temp=q.front().first;
        int h=q.front().second;
        q.pop();
        if(!m[h])
            m[h]=temp->data;
        if(temp->left)
            q.push({temp->left,h-1});
        if(temp->right)
            q.push({temp->right,h+1});
    }
    for(auto x:m)
        cout<<x.second<<" ";
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
    topview(root);

}