#include<stdio.h>
#define AND &&
#define ARRANGE (a>25 AND a<50)
void main()
{
    int a=30;
    if(ARRANGE)
        printf("yo yo");
}
