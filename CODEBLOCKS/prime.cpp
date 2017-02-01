 #include<stdio.h>
 int t;
 	int prime(int m,int n){
	int count = 0;
			for(int l=0;l<t;l++){
				for(int j=m;j<n+1;j++){
					for(int k=2;k<j;k++){
						if(j%k==0)
						count++;
					}
					if(count==0){
					printf("%d\n",j);
					}
				}
			}
}
int main(){
	int m,n;
	scanf("%d\n",&t);
	int u=t-1;
	while(u--){
		scanf("%d %d\n",&m,&n);
		prime( m, n);
			}
	}

