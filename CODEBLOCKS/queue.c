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
    return q;
}
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
void enqueue_front(struct queue *q,int item){
  if(isfull(q))
    return;
    if(q->f!=0)
    q->f--;
  q->array[q->f]=item;
  q->size=q->size+1;
}
int dequeue(struct queue *q){
    if(isempty(q))
        return INT_MIN;
    int item=q->array[q->f];
     q->f++;
     q->size=q->size-1;
     return item;
     }
int dequeue_back(struct queue *q){
    if(isempty(q))
        return INT_MIN;
        if(q->r!=0)
        q->r--;
    int item=q->array[q->r];
     q->size=q->size-1;
     return item;
     }
void printlist(struct queue*q){
    int i;
  //  printf("%d %d \n",q->r,q->f);
for(i=q->f;i<q->r;i++){
    printf("%d ",q->array[i]);
}}
int main(){
struct queue *q;
int n;
printf("Enter no. of elements\n");
scanf("%d",&n);
q=createqueue(n);

int i,k;
while(1){
printf("enter choice\n\t1.Enqueue\n\t2.Dequeue\n\t3.Enqueue_front\n\t4.Dequeue_back\n\t5.PrintList\n\t6.Exit\n");
scanf("%d",&i);
switch(i){
		case 1:
		printf("enter no u want to insert\n");
		scanf("%d",&k);
		enqueue(q,k);
		break;
		case 2:
		dequeue(q);
		break;
		case 3:
		printf("enter no u want to insert\n");
		scanf("%d",&k);
		enqueue_front(q,k);
		break;
		case 4:
		dequeue_back(q);
		break;
		case 5:
		printlist(q);
		printf("\n");
		break;
		case 6:
		exit(0);		
}
}
}
