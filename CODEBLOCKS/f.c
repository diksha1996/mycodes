#include<stdio.h>
#include<string.h>
void fun (char*,char*);
void main()
{char source[]="dishu";
char target[10];
fun(source,target) ;
puts(source);
puts(target);
}
void fun (char*x,char*y )
{
    strcpy(*y,*x);
}
