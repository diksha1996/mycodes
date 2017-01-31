#include<bits/stdc++.h>
using namespace std;



long long subsetsWithEqualABC(string &A)
{
	long long i,j,k,a = 0,b = 0,c = 0,n = A.size();
	vector< pair<long long,long long> > vec;
	pair<long long,long long> pr;
	long long count_c = 0,left_sum = 0;
	int64_t subsets = 0;
	vec.push_back(make_pair(0,0));
	for(i = 0;i < n;++i)
	{
		if(A[i] == 'A')a++;
		else if(A[i] == 'B')b++;
		else 
			c++;
		vec.push_back(make_pair(a-b,a-c));		 
	}
	sort(vec.begin(),vec.end());
	i = 0;
	while(i < n)
	{
	    pr = vec[i];
	    j = i+1;
	    while(vec[j] == pr)j++;
	    k = j-i;
	    subsets += (k*(k-1))/2;
	    i = j;
	}
	return subsets;
}

int main()
{
		string A;
		cin >> A;
		long long subsets = subsetsWithEqualABC(A);
		cout << subsets << endl;
	return 0;
}
