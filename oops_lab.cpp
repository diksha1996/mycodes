#include<iostream>
using namespace std;
class sum{
int real;
int imag;
public:
   void get(){
    cin>>real>>imag;
    }
    sum s(sum c1){
    c1.real=real+c1.real;
    c1.imag=imag+c1.imag;
    return c1;
    }
   void display ()
    {
    cout<<real<<imag;
    }};
int main(){
sum c1,c2;
c1.get();
c2.get();
c2=c2.s(c1);
c2.display();
return 0;
}
