#include<stdio.h>
#include<stdlib.h>
int size=0;
struct Node{
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
};


void push(struct Node **root,int data)
{
    struct Node* new_node=newNode(data);
    if(*root==NULL)
    {
        *root=new_node;
        size++;
        printf("%d push to stack\n",new_node->data);

    }
    else
    {
        size++;
        new_node->next=*root;
        *root=new_node;
        printf("%d push to stack\n",new_node->data);
    }
}

int pop(struct Node** root)
{
    if(*root==NULL)
        exit(0);
   
    struct Node* temp=*root;
    *root=(*root)->next;
    int res=temp->data;
    free(temp);
    return res;
}

int peek(struct Node* root)
{
    if(root==NULL)
        exit(0);
    return root->data;
}

int main()
{
    struct Node *root=NULL;
    push(&root,1);
    push(&root,2);
    push(&root,3);
    push(&root,4);
    push(&root,5);
    printf("%d",peek(root));//Top element
    printf("\n");
    for(int i=0;i<size;i++)
        printf("%d ",pop(&root));//Top element is popped from stack
    return 0;
 
}