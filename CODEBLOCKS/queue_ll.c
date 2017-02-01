#include<stdio.h>
#include<stdlib.h>
struct qnode{
int data;
struct qnode*link;
};
struct queue{
struct qnode *front,*rear;
};
struct qnode *newnode(int k){
struct qnode *temp;
temp=(struct qnode*)malloc(sizeof(struct qnode));
temp->data=k;
temp->link=NULL;
return temp;
};
struct queue *createqueue(){
struct queue *q;
q=(struct queue *)malloc(sizeof(struct queue));
q->front=q->rear=NULL;
return q;
};
void enqueue(struct queue*q,int item){
struct qnode *temp;
temp=newnode(item);
if(q->rear==NULL)
    {q->front =q->rear=temp;
    return;
    }
    q->rear->link=temp;
    q->rear=temp;
}
struct qnode *dequeue(struct queue*q){
if(q->front==NULL)
    return NULL;
    struct qnode *temp;
    temp=q->front;
    q->front=q->front->link;
    if(q->front==NULL)
        q->rear=NULL;
    return temp;
};
void printlist(struct queue *q){
while(q->front!=NULL){
    printf("%d ",q->front->data);
    q->front=q->front->link;
}}
int main(){
struct queue *q;
q=createqueue();
enqueue(q,1);
enqueue(q,2);
enqueue(q,3);
enqueue(q,4);
enqueue(q,5);
dequeue(q);
printlist(q);
}
