#include<stdio.h>
int ntr(int i){
if(i<=0)
    return -1;
    else
     {i--;
	 ntr(i);
    printf("%d ",i--);
    ntr(i);
    }
}
int a(int m,int n){
	if(m==0)
	return (n+1);
	if(n==0)
  return a(m-1,1) ;
	else
return	a(m-1,a(m,n-1));
}
int main(){
int c;
c=a(2,3);
printf("%d",c);
return 0;
}

