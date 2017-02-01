#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;

};
void push(struct node **head_ref,int new_data)
{
 struct node *new_node=(struct node*)malloc(sizeof(struct node*));
 new_node->data=new_data;
 new_node->link=*head_ref;
 *head_ref=new_node;
}
void oddeven(struct node **head_ref){
struct node *a,*b, *c, *d;
c=a=*head_ref;
d=b=a->link;
while(a!=NULL&&b!=NULL){
    a->link=b->link;
    b->link=a->link->link;
    a=a->link;
    b=b->link;
}
printf("\n odd no linked list\n");
 while(c!=NULL){
      printf("%d ",c->data);
      c=c->link;
      }
printf("\n even no linked list\n");
 while(d!=NULL){
      printf("%d ",d->data);
      d=d->link;
      }


};
 void reverse(struct node** head_ref)
{
    struct node* prev   = NULL;
    struct node* current = *head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
void rev(struct node *head_ref){
    if(head_ref==NULL)
        return;
rev(head_ref->link);
printf("%d",head_ref->data);
 }
int loop(struct node * head_ref){
struct node *a,*b;
a=head_ref;
b=head_ref;
while(a!=NULL&&b!=NULL&&b->link!=NULL)
    {
        a=a->link;
        b=b->link->link;
        if(a==b)
        {
            printf("loop found");
            return 1;
        }
    }
return 0;
}
int getcount (struct node *head){
int c=0;
struct node *temp = head;
while (temp!=NULL){
    c++;
    temp=temp->link;
}
return c;
}
int main(){
struct node* head = NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,4);
push(&head,5);
struct node *start, *h,*temp,*p;
h=head;
temp=head;
start = head;
while(head!=NULL){
      printf("%d ",head->data);
      head=head->link;
      }
printf("\n%d\n",getcount(start));
reverse(&start);
rev(start);
struct node *i;
i=start;

while(start!=NULL){
      printf("%d ",start->data);
      start=start->link;
}
 oddeven(&i);



return 0;
}
