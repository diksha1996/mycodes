#include<bits/stdc++.h>
using namespace std;
# define qty INT_MIN
# define qtm INT_MAX
pair<long long,long long> dfs(long long s,long long *visited,long long *value,long long n,map<long long ,vector<long long> > &mp,long long &p)
{
	visited[s] = 1;
	pair<long long,long long> ans,k;
	if(mp[s].size()==1 && visited[mp[s][0]] != 0)
	{
	ans.first = value[s];
	ans.second = value[s];
	}
	else
	{
		long long i,j = 0,m1 = qty,m2 = qty;
		for(i = 0;i < mp[s].size();++i)
		{
		  if(visited[mp[s][i]] == 0)
		  {
		   //cout << s << " " << mp[s][i] << endl;
		   k = dfs(mp[s][i],visited,value,n,mp,p);
		   visited[mp[s][i]] = 2;
		   j += k.first;
		   if(k.second > m1){m2 = m1;m1 = k.second;}
		   else if(k.second <= m1 && k.second >= m2)m2 = k.second;
		   else {;}
		   
		  }
		}
		if(p < (m1+m2))p = (m1+m2);
		j += value[s];
		ans.first = j;
		ans.second = (j>m1)?j:m1;
	}
	//if(p == qty)cout <<s<< "  (" << ans.first << "," << ans.second << ") N" << endl;
	//if(p != qty)cout <<s<< "  (" << ans.first << "," << ans.second << ") " <<p<< endl;
	return ans;
}
int main()
{
	long long i,j,k,n;
	cin >> n;
	long long value[n+1];
	long long visited[n+1];
	long long m1 = qtm,m2 = qtm;
	for(i = 1;i < n+1;++i)
	{
	  cin >> k;
	  value[i] = k;
	  if(k < m1){m2 = m1;m1 = k;}
	  else if(k >= m1 && k <= m2)m2 = k;
	  else {;}
	}
	for(i = 1;i < n+1;++i)
	  visited[i] = 0;
	long long p = qty;
	map<long long ,vector<long long> > mp; 
	for(i = 0;i < n-1;++i)
	{
	  cin >> j >> k;
	  mp[j].push_back(k); 
	  mp[k].push_back(j);
	} 
	//cout << 1 << endl;
	pair<long long,long long> vin = dfs(1,visited,value,n,mp,p); 
	if(n == 1)cout << "Impossible" << endl;
	else if(p > (m1+m2))cout << p << endl;
	else cout << "Impossible" << endl;
return 0;
}

