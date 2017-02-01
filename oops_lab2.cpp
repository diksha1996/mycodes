#include<iostream>
using namespace std;
class sum{
int hrs;
int mins;
public:
   void get(){
    cin>>hrs>>mins;
    }
    sum s(sum c1){
    c1.mins=(mins+c1.mins)%60;
    c1.hrs=hrs+c1.hrs+(c1.mins/60);
    return c1;
    }
   void display ()
    {
    cout<<hrs<<mins;
    }};
int main(){
sum c1,c2;
c1.get();
c2.get();
c2=c2.s(c1);
c2.display();
return 0;
}

