#include<stdio.h>
#include<string.h>
void main()
{
    int i;
char s[5],c,count=0;
puts("enter the string");
gets(s);
puts("enter the character to check its occurence");
gets(c);
for(i=1;s[i]!='\0';i++)
{
    if(s[i]==c)
        count++;
}
printf("no. of required characters=%d",count);

}
