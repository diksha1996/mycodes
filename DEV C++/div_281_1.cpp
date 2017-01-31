#include<bits/stdc++.h>
using namespace std;
int main(){
	string ht,at;
	cin>>ht;
	cin>>at;
	int n,ti,pl;
	int ath[101],hth[101],ar[101],hr[101];
	for(int i=0;i<101;i++){
		ath[i]=0;
		hth[i]=0;
		ar[i]=0;
		hr[i]=0;
	}
	char te,c;
	cin>>n;
	while(n--){
		cin>>ti>>te>>pl>>c;
		if(c=='r')
		{   if(te=='a'&&ar[pl]==0){
			cout<<at<<" "<<pl<<" "<<ti<<endl;
			ar[pl]=1;
		}
			
			else if(hr[pl]==0){
				cout<<ht<<" "<<pl<<" "<<ti<<endl;
				hr[pl]=1;
			}
			
		}
		else
		{
		   if(te=='a'){
		   	if(ath[pl]==1&&ar[pl]==0)
		   	{
		   		//ath[pl]=0;
		   		cout<<at<<" "<<pl<<" "<<ti<<endl;
		   		ar[pl]=1;
		   	}
		   	else
		   	ath[pl]=1;
		   }
		   else
		   {
		   	if(hth[pl]==1&&hr[pl]==0)
		   	{
		   		//hth[pl]=0;
		   		cout<<ht<<" "<<pl<<" "<<ti<<endl;
		   		hr[pl]=1;
		   	}
		   	else
		   	hth[pl]=1;
		   }	
		}
	}
	return 0;
}
