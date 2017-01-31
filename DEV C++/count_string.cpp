    #include<bits/stdc++.h>
    #define ll long long int
    #define MOD 1000000007
    using namespace std;
     
    int main()
    {
        char s[100005];
        scanf("%s",s);
        int  n =  strlen(s);
        ll ways = 0, ans = 0;
     
        if(n==1){
            printf("%d\n",'Z' - s[0]);
            return 0;
        }
     
        for(int i = 0 ; i < n ;  i++){
     
            ans  = (ans + (ways + 1)*('Z' - s[i])) % MOD;
            ways  = (ways*26 + ('Z' - s[i])) % MOD;
        }
     
        cout<< ans <<endl;
     
        return 0;
    } 
