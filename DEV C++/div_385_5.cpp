#include<bits/stdc++.h>
using namespace std;
void fun(int &n,int &m,int *arr)
{

}
int main()
{
int n,i,j,k,l,p;
cin >> n;
int arr[n+1];
for(i = 1;i <= n;++i )
 arr[i] = 0;
vector<int>::iterator it;
  for(p = 0;p < 10;++p)
  {
    vector<int> ls1,ls2;
    l = pow(2,p);
    for(i = 1;i<=n;++i)
    {
      if((l&i) == 0){ls1.push_back(i);}//cout << "* " << i;}     
      else {ls2.push_back(i);}//cout << "# " << i;} 
    }
    if(ls1.size()==0 or ls1.size()==n)break;
    cout << ls1.size() << endl;
    for(it = ls1.begin();it != ls1.end();++it)
       cout << *it << " ";
    cout << endl;
    fflush(stdout);
    for(i = 1;i <= n;++i )
    {
      cin >> j;
      if(arr[i] == 0)arr[i] = j;
      else if(j != 0 && j < arr[i])arr[i] = j;
      else{;}
    }
    cout << ls2.size() << endl;
    for(it = ls2.begin();it != ls2.end();++it)
       cout << *it << " ";
    cout << endl;
    fflush(stdout);
    for(i = 1;i <= n;++i )
    {
      cin >> j;
      if(arr[i] == 0)arr[i] = j;
      else if(j != 0 && j < arr[i])arr[i] = j;
      else{;}
    }
  }
cout << -1 << endl;
for(i = 1;i <= n;++i)
  cout << arr[i] << " ";
cout << endl;
fflush(stdout);
return 0;
}

