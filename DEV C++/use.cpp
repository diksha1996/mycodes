#include<bits/stdc++.h>
#define M 1000000007
#define MAX 1000001
#define ll long long
#define fi first 
#define se second 

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
using namespace std;

cout<<fixed<<setprecision(8)<<ans<<endl;

int gcdofnumbers(int val1, int val2)
{
   	int temp;
   	if(val1 > val2)
   	{
     		temp = val1;
     		val1 = val2;
     		val2 = temp;
   	}
  	if(val2 % val1 == 0)
	{
    		return val1;
	}
  	else
	{
    		return gcdofnumbers(val2 % val1, val1);
	}
}
 
int lcmofnumbers(int num1, int num2)
{
  	int gcd = gcdofnumbers(num1, num2);
  	return (num1 * num2) / gcd;
}

//power function
/*long long power(int x,int y)
{
    long long res = 1; 
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1; 
        x = (x*x) % mod;  
    }
    return res;
}*/
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

//seive
int num[MAX];
sieve(int n){
	for(int i=2;i<=n;i++){
		if(num[i]==0){
		num[i]=1;
		for(int j=i*2;j<=n;j+=i)
		    num[j]++;
		}
	}
	
//factors
	ll limit=(ll)sqrt((double)temp);
		for(ll i=1;i<=limit+1;i++){
			if(temp%i==0)
			{
				if((i*i)==temp&&i>b)
				x++;
				else 
				{
				if(i>b)
				x++;
				if((temp/i)>b)
				x++;
			}
				//9x+=2;
			}
		}	
}

//prime

   int is_p(int x)
{
	int r=1;
	for (int d=3; d*d<=x; d+=2)
		if (x%d==0) r=0;
	return r;
}
