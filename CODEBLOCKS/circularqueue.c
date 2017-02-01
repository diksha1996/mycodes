#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct queue{
int *array;
unsigned c;
int size,f,r;
}*q;
static int count =0;
struct queue *createqueue(unsigned c){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->c=c;
    q->size=0;
    q->f=0;
    q->r=c-1;
    q->array=(int*)malloc(c*sizeof(int));
    return q;
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
      q->r = (q->r + 1)%q->c;
  q->array[q->r]=item;
  q->size=q->size+1;
}
int dequeue(struct queue *q){
    if(isempty(q))
        return INT_MIN;
        int i ;
        i=q->array[q->f];
      q->f = (q->f + 1)%q->c;
     q->size=(q->size)-1;
     return i;
     }
void printlist(struct queue*q){
    int i;
    if(!isfull(q)){
for(i=q->f;i<=q->r;i++)
    printf("%d ",q->array[i]);
}
else{
for(i=0;i<q->c;i++)
printf("%d ",q->array[i]);
}}
void push(int item ){

    count ++;
   q=createqueue(count);
   enqueue(q,item);
   int temp;
   temp=q->f;
   q->f=q->r;
   q->r=temp;
}
int pop(){
return dequeue(q);
}
int main(){
push(6);
push(5);
push(4);
push(3);
push(2);
printlist(q);
}
