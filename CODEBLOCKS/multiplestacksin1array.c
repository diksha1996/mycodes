#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct ms{
int arr[100];
int t[100];
int m,n;
};
struct ms *create(int x,int y,struct ms *stack){
stack=(struct ms*)malloc(sizeof(struct ms));
stack->n=x;
stack->m=y;
return stack;
};
void initialise(int i,struct ms *stack){
stack->t[i]=i*(stack->n)/(stack->m)-1;
}
void push(int i,int x,struct ms *stack){
if(stack->t[i]==((i+1)*(stack->n/stack->m)-1))
    return ;
   stack->arr[stack->t[i]+1]=x;
   stack->t[i]++;
   printf("%d is pushed to %d th stack\n",x,i);
}
int pop(int i,struct ms *stack){
if(stack->t[i]==(i*(stack->n/stack->m)-1))
    return INT_MIN;
   int x;
   x=stack->arr[stack->t[i]];
   stack->t[i]--;
   return x;
}
int main(){
    struct ms *stack;
stack=create(9,3,stack);
initialise(0,stack);
initialise(1,stack);
initialise(2,stack);
push(0,1,stack);
push(1,2,stack);
push(2,3,stack);
push(0,4,stack);
push(1,5,stack);
push(2,6,stack);
push(0,7,stack);
push(1,8,stack);
push(2,9,stack);
int p;
p=pop(1,stack);
printf("%d is popped from 1th stack",p);
return 0;
}
