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

void printlist(struct node *n){
while(n!=NULL){
    printf("%d ",n->data);
    n=n->link;
}
}
void sort2(struct node **head_ref){
int s;
struct node *head,*t,*n,*a;

do{
    s=0;
    t=*head_ref;
    head=NULL;
    while(t->link!=NULL){
    if(t->data>t->link->data){
    s=1;
    n=t->link;
    t->link=n->link;
    if(t==*head_ref){
    n->link=t;
    head=n;
    *head_ref=n;
    }
    else{
    head->link=n;
    n->link=t;
    head=head->link;
    }
    a=t;
    t=n;
    n=a;
    t=t->link;
    }
    else{
    if(t==*head_ref){
    head=*head_ref;
    }
    else{
    head=head->link;
    }
    t=t->link;
    }
    }
}
while(s);
}
void sort(struct node *head_ref){
int s;
struct node *f ,*l;
f=head_ref;
l=NULL;
if(head_ref==NULL)
    return;
do{
    s=0;
    f=head_ref;
    while(f->link!=NULL){
    if(f->data>f->link->data){
    swap(f,f->link);
    s=1;
    }
    f=f->link;
    }
    l=f;
}
while(s);
}
void swap(struct node *a,struct node *b){
int t;
t=a->data;
a->data=b->data;
b->data=t;
}
void swaplist(struct node **head_ref){
struct node *a,*b,*c;
a=*head_ref;
b=a->link;
*head_ref=b;
while(1)
{c=b->link;
b->link=a;
if(c==NULL||c->link==NULL){
    a->link=c;
    break;
}
a->link=c->link;
a=c;
b=a->link;
    }
}
void merge(struct node **head_ref1,struct node **head_ref2)
{
    struct node *p ,*q,*temp1,*temp2;
    p=*head_ref1;
    q=*head_ref2;
    while(1){
    if(p->link==NULL){
    p->link=q;
    break;
    }
    else if(q->link==NULL){
        temp1=p->link;
    q->link=temp1;
    break;
    }
    else if(p->link==NULL&&q->link==NULL)
     {p->link=q;
    break;
    }

    temp1=p->link;
    temp2=q->link;
    p->link=q;
    q->link=temp1;
    p=temp1;
    q=temp2;
}
}




int main(){


struct node *head=NULL;
struct node *head1=NULL;
head=insert_last(head,7);
head=insert(head,0);
head=insert(head,1);
head=insert(head,8);
head=insert(head,6);
head=insert(head,3);
head=insert_last(head,4);
insert2(head->link,2);
printlist(head);
sort2(&head);
printf("\n");
printlist(head);
swaplist(&head);
printf("\n");
printlist(head);
head1=insert_last(head1,5);
head1=insert(head1,5);
head1=insert(head1,5);
head1=insert(head1,5);
head1=insert(head1,5);
head1=insert(head1,5);
head1=insert_last(head1,5);
insert2(head1->link,5);
printf("\n");
printlist(head1);
merge(&head,&head1);
printf("\n");
printlist(head);
return 0;
}
