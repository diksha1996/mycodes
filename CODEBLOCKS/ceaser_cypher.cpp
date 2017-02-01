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
            int t = (s[i]-'a') + k;
            s[i] = t%26 + 'a';
        }
        else
        {
            int t = (s[i]-'A') + k;
            s[i] = t%26 + 'A';
        }
    }
    break;
    case 2: for(int i=0;i<n;i++)
    {   if(s[i]==' ')
            continue;
        if(s[i]>=97&&s[i]<=122)
        {
            int t = (s[i]-'a') - k + 26;
            s[i] = t%26 + 'a';
        }
        else
        {
            int t = (s[i]-'A') - k + 26;
            s[i] = t%26 + 'A';
        }
    }
    break;
    }
    cout<<s<<endl;
}
