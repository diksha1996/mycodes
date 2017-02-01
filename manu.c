#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    if((b*b)<(4*a*c))
        printf("no real roots\n");
    else{
    x1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    x2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    printf("\nthe roots r %f\t%f",x1,x2);
    }
}
