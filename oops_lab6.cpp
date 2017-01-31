#include<iostream>
using namespace std;
class B;
class A{
int a;
public:
    void get(){
    cin>>a;
    }
     void sum(B);
    };
class B{
int b;
public:
        void get(){
    cin>>b;
    }

    friend class A;
    };
void A::sum(B y){
    int c;
    c=a+y.b;
    cout<<c;
}
int main(){
 A a1;
 B b1;
 a1.get();
 b1.get();
 a1.sum(b1);
 return 0;
 }


