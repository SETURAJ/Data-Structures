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

void bottomview(Node *root)
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
    Node* root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left=newNode(5);
    root->left->right=newNode(3);
    root->left->right->left=newNode(10);
    root->left->right->right=newNode(14);
    root->right->right=newNode(25);
    root->right->left = newNode(4);
    bottomview(root);
    //Print rightmost element in case of same level
}