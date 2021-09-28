#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}no;

typedef struct Queue{
    no *front,*rear;
}que;

que* createqueue()
{
    que *temp=(que *)malloc(sizeof(que));
    temp->front=temp->rear=NULL;
    return temp;

}

no* newNode(int data)
{
    no* temp=(no *)malloc(sizeof(no));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void enqueue(que *q,int data)
{
    if(q->rear==NULL)
    {
        no *new_node=newNode(data);
        q->front=q->rear=new_node;     
    }
    else
    {
        no *new_node=newNode(data);
        q->rear->next=new_node;
        q->rear=new_node;
    }
}

void dequeue(que *q)
{
    if(q->front==NULL)
        exit(0);
    no *temp=q->front;
    q->front=q->front->next;
    if(q->front==NULL)
        q->rear=NULL;
    free(temp);
}

int main()
{
    que* q=createqueue();
    enqueue(q,1);
    enqueue(q,2);
   // enqueue(q,3);
    //enqueue(q,4);
   // enqueue(q,5);
    printf("%d ",q->front->data);
    printf("%d",q->rear->data);
    printf("\n");
    dequeue(q);
    dequeue(q);
    enqueue(q,3);
    printf("%d ",q->front->data);
    printf("%d",q->rear->data);

}