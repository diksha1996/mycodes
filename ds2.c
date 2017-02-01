#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node* insert(struct node *head_ref,int new_data)
{
 struct node *new_node;
 new_node=(struct node*)malloc(sizeof(struct node*));
 new_node->data=new_data;
 new_node->link=(head_ref);
 return ((head_ref)=new_node);
}
void insert2( struct node *prev,int new_data)
{
 struct node *new_node;
 new_node=(struct node*)malloc(sizeof(struct node*));
 if(prev==NULL){
    printf("cant be");
    return;
 }
 new_node->data=new_data;
 new_node->link=prev->link;
 prev->link=new_node;
}

struct node *insert_last(struct node *head_ref,int new_data)
{
 struct node *new_node;
 new_node=(struct node*)malloc(sizeof(struct node*));
 struct node *last;
 last=head_ref;
new_node->data=new_data;
new_node->link=NULL;
if(head_ref==NULL){
   head_ref=new_node;
   return;
   }
 while(last->link!=NULL)
    last=last->link;
    last->link=new_node;
    return head_ref;
}
void del(struct node *prev)
{if(prev!=NULL){
    prev->link=prev->link->link;
    return;
}
    free(prev->link);
}
void printlist(struct node *n){
while(n!=NULL){
    printf("%d ",n->data);
    n=n->link;
}
}
int search(struct node *head_ref,int x){
    if (head_ref==NULL)
    {
    return 0;
    }
    if(head_ref->data==x){
    return 1;
    }
    search(head_ref->link,x);
}
int getn(struct node *head_ref,int x){
struct node *temp;
temp=head_ref;
int count=0;
while(temp!=NULL)
    {
        if(count==x)
         return temp->data;
         count++;
         temp=temp->link;
    }
}
struct node* middle(struct node *head_ref){
struct node *a,*b;
a=head_ref;
b=head_ref;
if(head_ref!=NULL){
while(a!=NULL&&a->link!=NULL){
    a=a->link->link;
    b=b->link;
    }
}
return b;
}
int detectloop(struct node *list)
{
  struct node  *slow_p = list, *fast_p = list;

  while(slow_p && fast_p &&
          fast_p->link )
  {
    slow_p = slow_p->link;
    fast_p  = fast_p->link->link;
    if (slow_p == fast_p)
    {printf("\n");
       printf("Found Loop");
       return 1;
    }
  }
  printf("\n");
  printf("not found loop");
  return 0;
}
struct node* endnode(struct node *head_ref,int n){
    struct node *temp,*a,*b;int i =1;
    temp=head_ref;
    if(head_ref!=NULL)
    {while(i<=n){
        if(temp==NULL)
        {printf("cant do");
        return;}
        temp=temp->link;
        i++;
    }
    a=head_ref;
    b=temp;
    while(b!=NULL){
    a=a->link;
    b=b->link;
    }}
    return a;
}

int main(){


struct node *head=NULL;
head=insert_last(head,5);
head=insert(head,0);
head=insert(head,1);
head=insert(head,8);
head=insert(head,6);
head=insert(head,3);
head=insert_last(head,4);
insert2(head->link,2);
printlist(head);
del(head->link);
printf("\n");
printlist(head);
printf("\n");
search(head,4)?printf("yes"):printf("no");
int k=getn(head,3);
printf("\n%d",k);
struct node*mid;
mid = middle(head);
printf("\n%d",mid->data);
struct node*frmend;
frmend=endnode(head,3);
printf("\n%d",frmend->data);
frmend->link->link->link=head->link->link;
detectloop(head);
return 0;
}
