#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
struct Stack
{int top;
    unsigned capacity;
   char *array;
};
struct Stack* createStack(unsigned capacity)
{struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
 stack->array = (char*) malloc(stack->capacity * sizeof(char));
    return stack;
}
int isFull(struct Stack* stack)
{   return stack->top == stack->capacity - 1; }
int isEmpty(struct Stack* stack)
{   return stack->top == -1;  }
void push(struct Stack* stack, char item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
 }
 char pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return '\0';
    return stack->array[stack->top--];
}
void printlist(struct Stack *s){
    int i =0;
while(!isEmpty(s))
    printf("%c ",pop(s));
}

void balance(struct Stack *s, char *e){
    int i,c=0;
    for( i=0;e[i];i++){
    if(e[i]=='['||e[i]=='{'||e[i]=='('){
    push(s,e[i]);}
    else{
    if(e[i]==']'&&pop(s)!='[')
   {
   printf("\nunbalanced\n");
   break;}
    if(e[i]==')'&&pop(s)!='('){
      printf("\nunbalanced\n");
      break;}
    if(e[i]=='}'&&pop(s)!='{'){
        printf("\nunbalanced\n");
        break;
    }
    }
     }
     if(!isEmpty(s));
     printf("\nunbalanced\n");
 }
 int main()
 {struct Stack *s;
 s=createStack(100);
     push(s,'a');
    push(s,'a');
    push(s,'a');
    push(s,'a');
    push(s,'a');
    printlist (s);
    char e[]="{[()]}{}){[[]]}";
    balance(s,e);
    return 0;
 }
