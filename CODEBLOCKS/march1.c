#include<stdio.h>
#include<string.h>
int common(char *a,char *b){
int hash[257];
int flag=0;
int i;
for(i=0;i<257;i++){
	hash[i]=0;
}
for(i=0;i<strlen(a);i++){
	hash[a[i]]=1;
}
for(i=0;i<strlen(b);i++){
	if(hash[b[i]]==1)
	{flag=1;
	break;
	}
}	
return flag;
}

int main(){
	int t,i;
	scanf("%d",&t);
	char a[1001],b[1001];
	for(i=0;i<t;i++){
	scanf("%s %s",a,b);
	if(common(a,b))
	printf("Yes\n");
	else 
	printf("No\n");
}
	
}
