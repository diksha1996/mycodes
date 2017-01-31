#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int *k=a;
char str[]="dishu";
char *p=str;
puts (p);
puts (str);
printf ("%u\n",p+3);
printf("%u  %d\n",k,*k);
printf("%u %d",k+4,*(k+4));
}
