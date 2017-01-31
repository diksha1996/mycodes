#include<stdio.h>
int main()
{
	int a[10000],i=1,k;
	while(a[i-1]!=42){
		
		scanf("%d",&a[i]);
		i++;
		
	}
	for(k=1;k<i-1;k++){
	
		printf("%d\n",a[k]);
	}
	
	
	
	
	
	
	
}
