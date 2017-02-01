#include<stdio.h>
#include<stdlib.h>
struct node {
int info;
struct node *link;
};
int main(){
struct node *n,*temp,*start;
int i=1;
while( i++<=10){
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
}
while(start->link!=NULL){
      printf("%d ",start->info);
      start=start->link;
      }
}
