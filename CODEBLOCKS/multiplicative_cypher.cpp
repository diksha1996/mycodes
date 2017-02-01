#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    cout<<"Enter String"<<endl;
    gets(s);
    int n = strlen(s);
    int k;
    cout<<"Enter key"<<endl;
    cin>>k;
    cout<<"Press 1 for encryption or 2 for decryption"<<endl;
    int x ;
    cin>>x;
    switch(x){
     case 1: for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
            continue;
        if(s[i]>=97&&s[i]<=122)
        {
            int t = (s[i]-'a')*k;
            s[i] = t%26 + 'a';
        }
        else
        {
            int t = (s[i]-'A')*k;
            s[i] = t%26 + 'A';
        }
    }
    break;
     case 2:
         int r,r1,r2,s0,s1,s2,t,t1,t2,q;
         s1=1;
         s2=0;
         t1=0;
         t2=1;
         r1=26;
         r2=k;
         while(r2!=0)
         {
            r=r1%r2;
            q=r1/r2;
            s0=s1-q*s2;
            t=t1-q*t2;
            r1=r2;
            r2=r;
            s1=s2;
            s2=s0;
            t1=t2;
            t2=t;
         }
         if(r1!=1)
         {
             cout<<"Multiplicative inverse not possible"<<endl;
         }
         else
         {
             for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
            continue;
        if(s[i]>=97&&s[i]<=122)
        {
            if(t1<0)
            t1+=26;
            int t0 = (s[i]-'a')*t1;
            s[i] = (t0)%26 + 'a';
        }
        else
        {
            if(t1<0)
            t1+=26;
            int t0 = (s[i]-'A')*t1;
            s[i] = (t0)%26 + 'A';
        }
    }
         }
    break;
    }
    cout<<s<<endl;
}

