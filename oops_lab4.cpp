#include<iostream>
using namespace std;
class B;
class A{
int a;
public:
    void get(){
    cin>>a;
    }
    friend void sum(A,B);
    };
class B{
int b;
public:
    void get(){
    cin>>b;
    }
    friend void sum(A,B);
    };
void sum(A x,B y){
    int c;
    c=x.a+y.b;
    cout<<c;
}
int main(){
 A a1;
 B b1;
 a1.get();
 b1.get();
 sum(a1,b1);
 return 0;
 }
