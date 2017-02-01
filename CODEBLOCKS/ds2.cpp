#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
void insert(struct node **head_ref,int new_data)
{
 struct node *new_node=(struct node*)malloc(sizeof(struct node*));
 new_node->data=new_data;
 new_node->link=*head_ref;
 *head_ref=new_node;
}
void insert2( struct node *prev,int new_data)
{
 struct node *new_node=(struct node*)malloc(sizeof(struct node*));
 new_node->data=new_data;
 new_node->link=prev->link;
 prev->link=new_node;
}

void insert_last(struct node **head_ref,int new_data)
{
 struct node *new_node=(struct node*)malloc(sizeof(struct node*));
 struct node *last;
 last=*head_ref;
 while(last->link!=NULL)
    last=last->link;
    last->link=NULL;
}
void del(struct node *prev)
{   free(prev->link);
    prev->link=prev->link->link;
}
void printlist(struct node *head_ref){
while(head_ref->link!=NULL){
    printf("%d ",head_ref->data);
    head_ref=head_ref->link;
}
printf("\n");
}
int main(){


struct node *head=NULL;
insert_last(&head,-1);
insert(&head,0);
insert(&head,1);
insert_last(&head,4);
insert2(head->link,2);

printlist(head);
getchar();
return 0;
}
