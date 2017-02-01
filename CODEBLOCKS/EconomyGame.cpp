#include<bits/stdc++.h>
using namespace std;
long long gcd ( long long a, long long b )
{
  long long c;
  while ( a != 0 ) {
     c = a; 
	 a = b%a;
	 b = c;
  }
  return b;
}
// Returns the count of ways we can sum  S[0...m-1] coins to get sum n
int count( long long s[], int m, long long n )
{int a=-1;
    // If n is 0 then there is 1 solution (do not include any coin)
    if (n%s[0] == 0)
        return 1;
         if (n%s[1] == 0)
        return 1; 
		if (n%s[2] == 0)
        return 1;
    if (n < 0)
    return -1; 
    // count is sum of solutions (i) including S[m-1] (ii) excluding S[m-1]
    for(int i=0;i<m;i++){
   a=min( a,count(s,m,n-s[i]));
    }
    return a;
	
}
int main(){
	long long n,arr[3],flag;
	cin>>n;
	arr[0]=1234567;
	arr[1]=123456;
	arr[2]=1234;
	flag=count(arr,3,n);
	cout<<flag<<endl;
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
	
}
	
