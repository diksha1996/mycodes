#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *r;
struct node *d;
};
struct node *merge(struct node *a,struct node *b){
     struct node *rs;
 if(a==NULL)
    return b;
 if(b==NULL)
    return a;
 if(a->data<=b->data)
 {
     rs=a;
    rs->d=merge(a->d,b);
 }
 else
    {
    rs=b;
    rs->d=merge(a,b->d);
 }
 return rs;
 }
 struct node *flatten(struct node *head_ref){
     if(head_ref==NULL||head_ref->r==NULL)
        return head_ref;

     return merge(head_ref,flatten(head_ref->r));
 }
 void printlist(struct node *head){
 while(head!=NULL)
   {printf("%d ",head->data);
    head=head->d;
   }
 }
void insert(struct node **head_ref,int new_data)
{
 struct node *new_node;
 new_node=(struct node*)malloc(sizeof(struct node));
 new_node->data=new_data;
 new_node->r=NULL;
 new_node->d=(*head_ref);
 (*head_ref)=new_node;
}
int main(){
struct node *head,*h;
head=NULL;
insert(&head,30);
insert(&head,8);
insert(&head,7);
insert(&head,5);

insert(&(head->r),20);
insert(&(head->r),10);

insert(&(head->r->r),50);
insert(&(head->r->r),22);
insert(&(head->r->r),19);

insert(&(head->r->r->r),45);
insert(&(head->r->r->r),40);
insert(&(head->r->r->r),35);
insert(&(head->r->r->r),28);
printlist(head);
printf("\n");
printlist(head->r);
printf("\n");
printlist(head->r->r);
printf("\n");
printlist(head->r->r->r);
printf("\n");
flatten(head);

printlist(head);
return 0;
}
