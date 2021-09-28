#include<bits/stdc++.h>
//#include <boost/algorithm/string.hpp>
using namespace std;
#define MARKER -1
string res="";
class Node
{
    public:
        int data;
        Node *left,*right;
};
Node *newNode(int key)
{
    Node *temp=new Node();
    temp->data=key;
    temp->left=temp->right=NULL;
    return(temp);
}
void inorder(Node *root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void serialize(Node *&root,string &s)
{
    if(root==NULL)
    {
        s=s+to_string(MARKER);
        return;
    }
    s=s + to_string(root->data) ;
    serialize(root->left,s);
    serialize(root->right,s);
}
void deserialize(Node *&root,string res)
{
    int val;

}
int main()
{
    Node *root=newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
    cout<<"Inorder traversal before serializable"<<endl;
    inorder(root);
    
    serialize(root,res);
    cout<<"\n";
    int l=res.size();
    
    for(int i=0;i<l;i++)
        cout<<res[i]<<" ";
    Node *root1=NULL;
    deserialize(root1,res);
}