#include<bits/stdc++.h>
using namespace std;

string ConvertToBinaryString(int n,int b)
{
	string str = "";
	int i = 0,k;
	while(i <= b)
	{
		if(i == 0){k = 1;if((k & n)!= 0)str = "1";else str = "0";}
		else
			{k = k << 1;if((k & n)!= 0)str = '1'+str;else str = '0'+str;}
			i++;
	}
	return str;
}

int findMaxXor(vector<int> &vec0,vector<int> &vec1,map<int,string> &mp,int c,int k)
{
	if(vec0.size() == 1 && vec1.size() == 1)return (vec0[0]^vec1[0]);
	else 
	{
		int i,j;
		i = c;
		while(i <= k)
		{
			int flag = 0;int m1 = 0,m2 = 0;
			vector<int> vec00,vec01,vec10,vec11;
			for(j = 0;j< vec0.size();++j)
			  {
				if(mp[vec0[j]][i] == '0')vec00.push_back(vec0[j]);
				else vec01.push_back(vec0[j]);
			  }
			for(j = 0;j< vec1.size();++j)
			  {
				if(mp[vec1[j]][i] == '0')vec10.push_back(vec1[j]);
				else vec11.push_back(vec1[j]);
			  }
			if(vec01.size() && vec10.size()){flag = 1;m1 = findMaxXor(vec10,vec01,mp,(i+1),k);}
			if(vec11.size() && vec00.size()){flag = 1;m2 = findMaxXor(vec00,vec11,mp,(i+1),k);}
			if(flag){m1 = (m1 > m2)?m1:m2;return m1;}
			else i++;
		}
		if(i > k)return (vec0[0]^vec1[0]);
	}
}

int main()
{
	int i,j = INT_MIN,k = 0,n;
	cin >> n;
	int arr[n];
	map<int,string> mp;
	map<int,string> :: iterator it;
	for(i = 0;i < n;++i)cin >> arr[i];
	for(i = 0;i < n;++i)if(arr[i]>j)j = arr[i];
	while(j){j = j >> 1;k++;}
	k--;
	//cout << k << endl;
	for(i = 0;i < n;++i){mp[arr[i]] = ConvertToBinaryString(arr[i],k);}
	i = 0;vector<int> vec0;vector<int> vec1;int flag = 0;
	while(i <= k)
		{
			for(j = 0;j< n;++j)
			{
				if(mp[arr[j]][i] == '0')vec0.push_back(arr[j]);
			    else vec1.push_back(arr[j]);
			}
			if((vec0.size())&&(vec1.size())){flag = 1;break;}
			vec0.clear();vec1.clear();
			i++;
		} 
		if(flag == 0)cout << 0 << endl;
		else 
		{
			int max = findMaxXor(vec0,vec1,mp,i,k);
			cout << max << endl;
		}
	return 0;
}
