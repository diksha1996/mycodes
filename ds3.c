#include<stdio.h>
#include<stdlib.h>
struct node {
int info;
struct node *link;
};
void delete_list(struct node **head_ref){
    struct node *temp,*next;
    temp=*head_ref;
    while(temp!=NULL){
    next=temp->link;
    free(temp);
    temp=next;
    }
    *head_ref=NULL;
}

void reverse(struct node**head_ref){
    struct node *temp,*prev,*next;
    temp=*head_ref;
    prev=NULL;
    while(temp!=NULL){
    if(temp==*head_ref){
    next=temp->link;
    temp->link=prev;
    prev=temp;
    temp=next;
    }
    *head_ref=prev;
};
int main(){
struct node *n,*temp,*start;
int i=1;
while( i<=10){
    n=(struct node*)malloc(sizeof(struct node *));
    n->info=i;
    n->link=NULL;
    if(i==1){
    temp=n;
    start=n;
    }
    else{
    temp->link=n;
    temp=n;
    }
    i++;
}
struct node *head,*h;
head=start;
h=start;
while(start!=NULL){
      printf("%d ",start->info);
      start=start->link;
      }
      delete_list(&head);
      while(head!=NULL){
      printf("%d ",head->info);
      head=head->link;
      }

      reverse(&h);
      while(h!=NULL){
      printf("%d ",h->info);
      h=h->link;
      }


getchar();

return 0;
}
