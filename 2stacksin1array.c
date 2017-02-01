#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Stack
{int top1;
int top2;
unsigned capacity;
int *array;
};
struct Stack* createStack(unsigned capacity)
{struct Stack *stack;
stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top1 = -1;
    stack->top2 = capacity;
 stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}
int isFull(struct Stack* stack)
{  return stack->top1==((stack->top2)-1);
}
int isEmpty1(struct Stack* stack)
{   return stack->top1 == -1;
 }
int isEmpty2(struct Stack* stack)
{   return stack->top2 == stack->capacity;
 }
void push1(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top1] = item;
}
int pop1(struct Stack* stack)
{
    if (isEmpty1(stack))
        return INT_MIN;
    return stack->array[(stack->top1)--];
}
int peek1(struct Stack* stack)
{
    if (isEmpty1(stack))
        return INT_MIN;
    return stack->array[stack->top1];
}
void push2(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[--stack->top2] = item;
}
int pop2(struct Stack *stack)
{
    if (isEmpty2(stack))
        return INT_MIN;
    return stack->array[(stack->top2)++];
}
int peek2(struct Stack* stack)
{
    if (isEmpty2(stack))
        return INT_MIN;
    return stack->array[stack->top2];
}
int main(){
struct Stack *s;
s = createStack(5);
    push1(s,5);
    push2(s,10);
    push2(s,15);
    push1(s,11);
    push2(s,7);
    printf("%d %d %d %d %d\n",s->array[0],s->array[1],s->array[2],s->array[3],s->array[4]);
    printf("Popped element from stack1 is %d",pop1(s));
    push2(s,40);
    printf("\n%d",s->array[1]);
    printf("\nPopped element from stack2 is %d",pop2(s));
    return 0;
    }
