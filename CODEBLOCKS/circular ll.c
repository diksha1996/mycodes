#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
void push(struct node **head_ref,int new_data){
    struct node *new_node,*temp;
    temp=*head_ref;
 new_node=(struct node*)malloc(sizeof(struct node*));
 new_node->data=new_data;
 new_node->link=*head_ref;
 if(*head_ref!=NULL){
    while(temp->link!=*head_ref){
    temp=temp->link;
    }
    temp->link=new_node;
 }
 else
 new_node->link=new_node;
 *head_ref=new_node;
}
void sort_insert(struct node **head_ref,int new_data){
      struct node *new_node,*temp;
    temp=*head_ref;
    if(new_data>=temp->data)
   {push(&head_ref,new_data);
   return;
   }
 new_node=(struct node*)malloc(sizeof(struct node*));
 new_node->data=new_data;
 new_node->link=NULL;
 while(temp->link->data>new_data)
    temp=temp->link;
    new_node->link=temp->link;
 temp->link=new_node;
}


void printlist(struct node *head_ref)
{
    struct node *temp;
    temp=head_ref;
    do{
    printf("%d ",temp->data);
    temp=temp->link;
    }
    while(temp!=head_ref);
}
void split(struct node *head_ref,struct node **head_ref1,struct node **head_ref2){
struct node *s,*f;
s=head_ref;
f=head_ref;
if(head_ref==NULL)
    return;
while(f->link!=head_ref&&f->link->link!=head_ref){
s=s->link;
f=f->link->link;
}
if(f->link->link==head_ref)
    f=f->link;
*head_ref1=head_ref;
if((head_ref->link)!=(head_ref))
    *head_ref2=s->link;
f->link=s->link;
s->link=head_ref;
}
int main(){
struct node *head,*head1,*head2;
head=NULL;
head1=NULL;
head2=NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,5);
push(&head,6);
printlist(head);
sort_insert(&head,4);
printf("\n");
printlist(head);

split(head,&head1,&head2);
printf("\n");
printlist(head1);
printf("\n");
printlist(head2);

return 0;
}
