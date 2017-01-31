#include<stdio.h>
int main(){
int arr[300][300],n,x1[100000],x2[100000],y1[100000],y2[100000],q,i,j,k,l,c[11],count;
scanf("%d\n",&n);
for( i=1;i<=n;i++){
for(j=1;j<=n;j++){
scanf("%d",&arr[i][j]);
}
}
scanf("%d",&q);
for(i=1;i<=q;i++)
scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);
for(k=1;k<=q;k++){
    count=0;
for(l=1;l<=10;l++)
    c[l]=0;
for(i=x1[k];i<=x2[k];i++){
for(j=y1[k];j<=y2[k];j++){
    switch(arr[i][j]){
    case 1:
    c[1]++;
    break;
    case 2:
    c[2]++;
    break;
    case 3:
    c[3]++;
    break;
    case 4:
    c[4]++;
    break;
    case 5:
    c[5]++;
    break;
    case 6:
    c[6]++;
    break;
    case 7:
    c[7]++;
    break;
    case 8:
    c[8]++;
    break;
    case 9:
    c[9]++;
    break;
    case 10:
    c[10]++;
    break;
    }
    }
}
for(i=1;i<=10;i++){
if(c[i]!=0)
count++;
}
printf("%d\n",count);
}
}
