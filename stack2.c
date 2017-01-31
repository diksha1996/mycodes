#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node{
char data;
struct node *next;
};

struct node *new(char d){
struct node *new_node;
new_node=(struct node*)malloc(sizeof(struct node*));
new_node->data=d;
new_node->next=NULL;
return new_node;
};
void merge(struct node**root1,struct node **root2){
if(!isempty(*root2))
   {int temp;
   temp=pop(root2);
   merge(root1,root2);
   push(root1,temp);
   }
   }

void push(struct node **root, char d){
struct node *new_node;
new_node=new(d);
new_node->next=*root;
*root=new_node;
}

int pop(struct node **root){
   if(isempty(*root))
    return NULL;
    struct node *temp;
    temp=*root;
    (*root) = (*root)->next;
    char popped = temp->data;
    free(temp);
    return popped;
}

int isempty(struct node *root){
    if(root==NULL)
        return 1;
else
    return 0;
}
char peek(struct node *root){
if(isempty(root))
    return INT_MIN;
        else
            return root->data;
}

 void nge(struct node *root,int *a,int n){
     push(&root,a[0]);
     int i,j=0;
     for(i=1;i<n;i++){
    if(a[i]>a[i-1]){
    printf("%d_____%d\n",pop(&root),a[i]);
    push(&root,a[i]);
    }
    else
        push(&root,a[i]);
     }
    while(!isempty(root)){
    printf("%d_____-1\n",pop(&root));
    }
 }
int main(){
struct node *root;
root=NULL;

int arr[]={3,5,11,67,4,8,0,1};
nge(root,arr,8);
struct node *root1,*root2,*t;
    root1=root2=NULL;
    push(&root1,1);
    push(&root1,2);
    push(&root1,3);
    push(&root1,4);
    push(&root2,5);
    push(&root2,6);
    push(&root2,7);
    push(&root2,8);
merge(&root1,&root2);
while(!isempty(root1))
    printf("%d ",pop(&root1));
return 0;
}











