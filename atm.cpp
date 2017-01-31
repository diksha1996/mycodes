#include<stdio.h>
int main(){
	int b;
	float a;
	scanf ("%d %f",&b,&a);
	
	
	if(b<a&&(b%5==0)){
		float c = a-b-0.5;
		printf(" %f",c);
	}
	else{
		printf(" %f",a);
	}
return 0;
}
