#include<bits/stdc++.h>
using namespace std;
#define v 8
///////////////////////////////////
map<int,vector<int> >vics;
map<int ,int >mp;
int n;
int a[1001];
///////////////////////////////////
int getInput()
{
	cin >> n;
	map<int,int> sam;
	int i,j,k;
	for(i = 0;i < n;++i)
	{
	  cin >> a[i];
	  sam[a[i]] = 1;
	  vics[a[i]].push_back(i);
	  mp[i] = vics[a[i]].size()-1;
	}
	return sam.size();
}
////////////////////////////////////
int nextlthOccurence(int i,int l)
{
	if(l > 0)
	{
	 int r = a[i],c = mp[i];
	 if((c + l - 1) < vics[r].size() )return vics[r][(c + l - 1)];
	 else return -1;
	}
}
/////////////////////////////////////
int dp(int x)
{
int i,j,k,m1;
int dp[n+1][(1<<v)];
for(i = 0;i <= n;++i)
{
  for(j = 0; j < (1<<v);++j)
  {
    if(j== 0)dp[i][j] = 0;
    else dp[i][j] = INT_MIN;
   }
}
for(i = 0;i < n;++i)
{
for(j = 0; j < (1<<v);++j)
{
    if(dp[i][j] != INT_MIN )
    {
        m1 = (j|(1<<(a[i]-1)));//clarify
        if((m1 != j))
        {
	 k = nextlthOccurence(i,x); 
	 if(k != -1 && k < n)dp[k+1][m1] = max((x + dp[i][j]),dp[k+1][m1]);
	 k = nextlthOccurence(i,x+1); 
	 if(k != -1 && k < n)dp[k+1][m1] = max((x + dp[i][j] + 1),dp[k+1][m1]);
	}
	if(i != n)dp[i+1][j] = max(dp[i+1][j],dp[i][j]);     
    }
  }
}
return dp[n][(1<<v)-1];
}
///////////////////////////////////////////////
int bsearch()
{
	int low = 0,high = ((n/v)+1),mid;
	while(high-low > 1)
	{
	 mid = (low+high)/2;
	 if(dp(mid) == INT_MIN)high = mid;
	 else low = mid;
	}
	return (low);
}
///////////////////////////////////////////////////
int main()
{
int num = getInput();
if(num < v)cout << num << endl;
else
{
int len = bsearch();
cout << dp(len) << endl;
}
return 0;
}
