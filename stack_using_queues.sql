#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct queue{
int *array;
unsigned c;
int size,f,r;
};
struct queue *createqueue(unsigned c){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->c=c;
    q->size=q->f=0;
    q->r=0;
    q->array=(int*)malloc(c*sizeof(int));
};
int isfull(struct queue *q){
    return q->size==q->c;
}
int isempty(struct queue *q){
    return q->size==0;
}
void enqueue(struct queue *q,int item){
  if(isfull(q))
    return;
  q->array[q->r]=item;
  q->size=q->size+1;
  q->r++;

}
int dequeue(struct queue *q){
    if(isempty(q))
        return INT_MIN;
    int item=q->array[q->f];
     q->f++;
     q->size=q->size-1;
     return item;
     }
void printlist(struct queue*q){
    int i;
for(i=q->f;i<q->r;i++){
    printf("%d ",q->array[i]);
}}
void push(struct queue *q,int item){
struct queue *q2;
q2=createqueue(100);
if(isempty(q)){
    enqueue(q,item);
    return;
}
int temp;
temp=dequeue(q);
push(q,item);
enqueue(q,temp);
}
int pop(struct stack *q){
return dequeue(q);
}




int main(){
struct queue *q;
q=createqueue(100);
push(q,1);
push(q,2);
push(q,3);
push(q,4);
push(q,5);
push(q,6);
printlist(q);
}

