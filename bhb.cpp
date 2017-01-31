#include<bits/stdc++.h>
using namespace std;
int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}
int main()
{
    long long fact[100001];
    fact[0]=1;
    int i=1;
    int MOD=1000000007;
    while(i<=100000)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        i++;
    }
    int t;
    cin>>t;

    while(t--)
    {
        long long numerator,denominator,mmi_denominator,ans,sum;
        int n,k,val,noo=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {

        cin>>val;
        if (val==0)
            noo++;
        }
      if (noo==0)
      {  sum=0;
          int cnt=min(n,k);
          if(k%2==1)
            i=1;
          else i=0;
          for(i;i<=cnt;i+=2)
          {
        numerator=fact[n];
        denominator=(fact[i]*fact[n-i])%MOD;

        mmi_denominator=findMMI_fermat(denominator,MOD);
        ans=(numerator*mmi_denominator)%MOD;
        sum=(sum+ans)%MOD;
      //  cout<<ans<<endl;
          }

      }
       if (noo>0)
      {  sum=0;
          int cnt=min(n-noo,k);
          //if(k%2==1)
          //  i=0;
          //else i=0;
          for(i=0;i<=cnt;i++)
          {
        numerator=fact[n-noo];
        denominator=(fact[i]*fact[(n-noo)-i])%MOD;

        mmi_denominator=findMMI_fermat(denominator,MOD);
        ans=(numerator*mmi_denominator)%MOD;
        sum=(sum+ans)%MOD;
      //  cout<<ans<<endl;
          }

      }
        cout<<sum<<endl;
        //I declared these variable as long long so that there is no need to use explicit typecasting
        //printf("%lld\n",ans);

    }
    return 0;
}
