#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack
{int top;
    unsigned capacity;
   double *array;
};
struct Stack* createStack(unsigned capacity)
{struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
 stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}
int isFull(struct Stack* stack)
{   return stack->top == stack->capacity - 1; }
int isEmpty(struct Stack* stack)
{   return stack->top == -1;  }
void push(struct Stack* stack, double item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
void enqueue(struct stack *s,int item){
   if(isEmpty(s))
   {push(s,item);
   return ;}
   int temp;
   temp=pop(s);
   enqueue(s,item);
   push(s,temp);
}
void enqueue1(struct stack *s,int item){
    struct stack *s2;
    s2=createStack(100);
   if(isEmpty(s))
   {push(s,item);
   return ;}
   while(!isEmpty(s))
   push(s2,pop(s));
   push(s,item);
   while(!isEmpty(s2))
   push(s,pop(s2));
}

int dequeue(struct stack *s){
int temp;
temp=pop(s);
return temp;
}
void printlist(struct stack *s){

while(!isEmpty(s))
    printf("%d ",pop(s));
    printf("\n");
}
int main()
{struct stack *s;
s=createStack(100);
enqueue(s,0);
enqueue(s,1);
enqueue(s,2);
enqueue(s,3);
enqueue(s,4);
enqueue(s,5);

dequeue(s);
printlist(s);
return 0;
}
