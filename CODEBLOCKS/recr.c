#include<stdio.h>
void ntr(int i){
if(i<=0)
    return;
    else
     {ntr(i--);
    printf("%d ",i);
    ntr(i--);
    }
}
int main(){
ntr(5);
return 0;
}
