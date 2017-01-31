#include<bits/stdc++.h>
#include<vector>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;
bool myComparison(const pair<pair<ll,ll>,pair<ll,ll> > &a,const pair<pair<ll,ll>,pair<ll,ll> > &b)
{
       return a.fi.se<b.fi.se;
}
bool myComparison2(const pair<pair<ll,ll>,ll> &a,const pair<pair<ll,ll>,ll> &b)
{
       return a.fi.se<b.fi.se;
}
int main(){
	ll n,m,a,b,i,c;
	cin>>n;
	vector< pair<pair<ll ,ll> , ll > > p;
	ll ans[n];
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		ans[i]=-1;
		p.push_back(make_pair(make_pair(a,b),i));
	}
	sort(p.begin(),p.end(),myComparison2);
	cin>>m;
	vector< pair<pair<ll ,ll>, pair<ll,ll> > > ac;
	for(i=0;i<m;i++){
		cin>>a>>b>>c;
		ac.push_back(make_pair(make_pair(a,b),make_pair(c,i)));
	}
	sort(ac.begin(),ac.end(),myComparison);
	i=0;
	ll j=0,count=0;
	while(j<m&&i<n){
		if(((ac[j].fi.fi) <= (p[i].fi.fi))&&(ac[j].fi.se >= p[i].fi.se)&&(ac[j].se.fi!=0))
		{
			ans[p[i].se] = ac[j].se.se + 1;
			ac[j].se.fi--;
			count++;
			if(ac[j].se.fi==0)
			j++;
			i++;
		}
		else
		j++;
	}
	if(count==n){
		cout<<"YES"<<endl;
		for(i=0;i<n;i++)
	cout<<ans[i]<<" ";
	}
	else
	cout<<"NO"<<endl;
	
}
