#include<iostream>
using namespace std;
class A{
    public:
int m;
void show()
{cout<<m<<endl;
}};
int main(){
int A::*ptr1=&A::m;
cout<<ptr1<<endl;
void (A::*ptr2)()=&A::show;
cout<<ptr2<<endl;
A a1;
A *ptr;
ptr=&a1;
cout<<ptr<<endl;
a1.m=10;
a1.show();
ptr->m=20;
ptr->show();
a1.*ptr1=10;
a1.show();
ptr->*ptr1=30;
ptr->show();

(a1.*ptr2)();

return 0;
}
