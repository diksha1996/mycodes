#include<stdio.h>
#include<stdlib.h>
struct node{
int i;
struct node *next;
};

int main(){
struct node *n1;
struct node *n2;
struct node *n3;
n1 = (struct node*)malloc(sizeof(struct node *));
n2 = (struct node*)malloc(sizeof(struct node *));
n3 = (struct node*)malloc(sizeof(struct node *));
n1->i=1;
n1->next=n2;
n2->i=2;
n2->next=n3;
n3->i=3;

struct node *new1,*new2,*new3;
new1 = (struct node*)malloc(sizeof(struct node *));
new2 = (struct node*)malloc(sizeof(struct node *));
new3 = (struct node*)malloc(sizeof(struct node *));
struct node *temp=new1;
new1->i=0;
new1->next=n1;
new2->i=4;


new3->i=99;
n2->next=new3;
new3->next=n3;

n3->next=new2;
new2->next=NULL;
do
{
    printf("%d\n",temp->i);
    temp=temp->next;
}
while(temp->next!=NULL);








return 0;
}
