#include<bits/stdc++.h>

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

using namespace std;
int main(){
	    int n;
	    cin>>n;
	    vvi G;
	   vi D(n, 987654321); 
      // distance from start vertex to each vertex
      
	  // start vertex
      set<ii> Q;
      D[0] = 0;
      Q.insert(ii(0,0));
 
      while(!Q.empty()) {

           // again, fetch the closest to start element 
           // from “queue” organized via set
           ii top = *Q.begin();
           Q.erase(Q.begin());
           int v = top.second, d = top.first;
 
           // here we do not need to check whether the distance 
           // is perfect, because new vertices will always
           // add up in proper way in this implementation

           tr(G[v], it) {
                int v2 = it->first, cost = it->second;
                if(D[v2] > D[v] + cost) {
                     // this operation can not be done with priority_queue, 
                     // because it does not support DECREASE_KEY
                     if(D[v2] != 987654321) {
                           Q.erase(Q.find(ii(D[v2],v2)));
                     }
                     D[v2] = D[v] + cost;
                     Q.insert(ii(D[v2], v2));
                }
           }
      }
}
      
