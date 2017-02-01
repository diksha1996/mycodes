#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
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
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}
int operand (char ch){
return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='B'||ch>='0'&&ch<='9');
}
int prec(char ch){
switch(ch)
{case '+':
case '-':
    return 1;
case '*':
case '/':
    return 2;
case '^':
    return 3;
}
return -1;
}
int infixToPostfix(char *e){
struct Stack* stack = createStack(strlen(e));

int i,k;
if(!stack)
    return -1;
for(i=0,k=-1;e[i];i++){
    if (operand(e[i]))
        e[++k]=e[i];

    else if (e[i]=='('){
        push(stack,e[i]);
   }
   else if (e[i]==')'){
    while(!(isEmpty(stack))&&peek(stack)!='(')
       e[++k]= pop(stack);
       pop(stack);
   }
    else
        {
        while(!(isEmpty(stack))&&prec(e[i])<=prec(peek(stack)))
    e[++k]=pop(stack);
    push(stack,e[i]);
        }
}
while(!isEmpty(stack))
   {e[++k]=pop(stack);
   }
   e[++k]='\0';
   printf("%s\n",e);
}
int evaluate(char *p){
    int i;
    double c;
    struct Stack* stack = createStack(strlen(p));

for ( i=0;p[i];i++){
    if(operand(p[i]))
        push(stack,p[i]-'0');
    else{
    int b = pop(stack);
    int a = pop(stack);
    switch(p[i]){
case '+':
     c = a+b;
     break;
case '-':
     c = a-b;
     break;
case '*':
     c = a*b;
     break;
case '/':
     c = a/b;
     break;
case '^':
    c=pow(a,b);
    }
    push(stack,c);    }
}
printf("%lf",stack->array[0]);
}
int main()
{char e[]= "(a+b)^(c*d/e/f+g*h+i^(j+k))";
char p[]="23+46*4/2/14*+231+^+^";
infixToPostfix(e);
evaluate(p);
return 0;
}
