#include<stdio.h>
#include<limits.h>
int absolute(int x){
	if(x<0)
	return (-x);
	else
	return x;
}
int main(){
	int t,i,n,j,b[100001],a[100001],max;
	long long p[100001],sum,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
			max=INT_MIN;
			sum=0;
		scanf("%d %lld",&n,&k);
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++){
			scanf("%d",&b[j]);
		}
		for(j=0;j<n;j++){
			p[j]=a[j]*b[j];
			sum+=p[j];
		}
		for(j=0;j<n;j++){
		if(absolute(b[j])>max)
		max=absolute(b[j]);
		}
		sum+=(max*k);
		printf("%lld\n",sum);
	}
}
