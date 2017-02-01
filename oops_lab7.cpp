#include<iostream>
using namespace std;
class A{

public:
    int x,y;
    void get(){
    cin>>x>>y;
    }
    void sum(){
    int sum=x+y;
    cout<<sum;
    }};
int main(){
A a1;
A *ptr1;
ptr1=&a1;
ptr1->get();
void(A::*ptr)()=&A::sum;
(a1.*ptr)();
int A::*ptr2=&A::x;
cout<<ptr1->*ptr2;
}
