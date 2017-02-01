#include<stdio.h>
#include<stdlib.h>
struct node {
int info;
struct node *next;
struct node *prev;
};

void push(struct node **head, int item){
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->info=item;
    new_node->prev=NULL;
    new_node->next=*head;
   if(*head!=NULL)
    (*head)->prev=new_node;
    *head=new_node;
}
void reverse(struct node **head){
struct node *temp,*a=NULL;
temp=*head;
while(temp!=NULL){
    a=temp->prev;
    temp->prev=temp->next;
temp->next=a;
temp=temp->prev;
}
if(a!=NULL)
*head=a->prev;
}
struct node*get_last(struct node *head){
struct node *temp=head;
while(temp->next!=NULL)
    temp=temp->next;
    return temp;
};
struct node *partition(struct node *head,struct node *end,struct node **newhead,struct node **newend){
  struct node *pivot,*current,*tail,*pre=NULL;
pivot=end;
current=head;
tail=pivot;
while(current!=pivot){
    if(current->info<pivot->info)
    {if(*newhead==NULL)
    *newhead=current;
        pre=current;
        current=current->next;
    }
    else{
        if(pre)
         {pre->next=current->next;
         current->next->prev=pre;}
         else
            current->next->prev=NULL;
    struct node *temp;
    temp=current->next;
    current->next=NULL;
    tail->next=current;
    current->prev=tail;
    tail=current;
    current=temp;
    }
}
if(*newhead==NULL)
*newhead=pivot;
*newend=tail;
return pivot;

};

struct node *quicksort(struct node *head,struct node *last){
    if(!head||head==last)
        return head;
struct node *pivot,*newhead,*newend;
newhead=newend=NULL;
pivot=partition(head,last,&newhead,&newend);
if(newhead!=pivot)
    {
        struct node *temp;
        temp=pivot->prev;
        temp->next=NULL;

        newhead=quicksort(newhead,temp);
        temp=get_last(newhead);
        temp->next=pivot;
        pivot->prev=temp;
        pivot->next=quicksort(pivot->next,newend);
    pivot->next->prev=pivot;
    }


    return newhead;
};
void qs(struct node **head){
    *head=quicksort(*head,get_last(*head));
}
void printlist(struct node *head,struct node *last){
    head->prev=NULL;
    printf("\nin same order\n");
while(head!=NULL){
    printf("%d ",head->info);
    head=head->next;
}
printf("\nin reverse order\n");
while(last!=NULL){
    printf("%d ",last->info);
    last=last->prev;
}

}
int main(){
struct node *head;
head=NULL;
push(&head,0);
push(&head,9);
push(&head,5);
push(&head,7);
push(&head,2);
push(&head,8);
push(&head,1);
printlist(head,get_last(head));
reverse(&head);
printlist(head,get_last(head));
qs(&head);
printlist(head,get_last(head));

}
