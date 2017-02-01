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
struct node *get_tail(struct node *head_ref){
struct node *temp;
temp=head_ref;
while(temp->link!=NULL)
    temp=temp->link;
return temp;
}
struct node *partition (struct node *head_ref,struct node *end_ref,struct node **new_head,struct node **new_end){
struct node *pivot,*current,*tail,*prev=NULL;
pivot=end_ref;
current=head_ref;
tail=pivot;
while(current!=pivot){
    if(current->data<pivot->data)
    {if(*new_head==NULL)
    *new_head=current;
        prev=current;
        current=current->link;
    }
    else{
        if(prev)
         prev->link=current->link;
    struct node *temp;
    temp=current->link;
    current->link=NULL;
    tail->link=current;
    tail=current;
    current=temp;
    }
}
if(*new_head==NULL)
*new_head=pivot;
*new_end=tail;
return pivot;
}
struct node *quicksort_rec(struct node *head_ref,struct node *tail_ref){
 if(!head_ref||head_ref==tail_ref)
 return head_ref;
 struct node *new_head,*new_tail;
 new_tail=new_head=NULL;
 struct node *pivot;
 pivot=partition(head_ref,tail_ref,&new_head,&new_tail);
 if(new_head!=pivot)
    {
        struct node *temp;
        temp=new_head;
        while(temp->link!=pivot)
            temp=temp->link;
            temp->link=NULL;
        new_head=quicksort_rec(new_head,temp);
        temp=get_tail(new_head);
        temp->link=pivot;
    }
    pivot->link=quicksort_rec(pivot->link,new_tail);
    return new_head;


}

void qs(struct node **head_ref){
    *head_ref=quicksort_rec(*head_ref,get_tail(*head_ref));
    return;
}
int main(){
struct node* head = NULL;
push(&head,1);
push(&head,0);
push(&head,3);
push(&head,6);
push(&head,2);
struct node *start, *h,*temp,*p;
h=head;
temp=head;
start = head;
while(head!=NULL){
      printf("%d ",head->data);
      head=head->link;
      }
printf("\n");
qs(&start);
while(start!=NULL){
      printf("%d ",start->data);
      start=start->link;
      }

}




