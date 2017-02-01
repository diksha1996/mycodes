#include<iostream>
using namespace std;
class test{
int a;
int b;
public:
   void get(){
    cin>>a>>b;
    }
   friend void mean (test);
   };
    void mean (test t){
        int c;
        c=(t.a+t.b)/2;
        cout<<c;
    }
int main(){
test t;
t.get();
mean(t);
return 0;
}


