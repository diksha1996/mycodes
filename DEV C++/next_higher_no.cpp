#include<iostream>
 
using namespace std;
 
typedef unsigned int uint_t;
 
// this function returns next higher number with same number of set bits as x.
uint_t snoob(uint_t x)
{
 
  uint_t rightOne;
  uint_t nextHigherOneBit;
  uint_t rightOnesPattern;
 
  uint_t next = 0;
 
  if(x)
  {
 
    // right most set bit
    rightOne = x & -(signed)x;
    cout<<rightOne<<endl;
    // reset the pattern and set next higher bit
    // left part of x will be here
    nextHigherOneBit = x + rightOne;
 	cout<<nextHigherOneBit<<endl;
 	
    // nextHigherOneBit is now part [D] of the above explanation.
 
    // isolate the pattern
    rightOnesPattern = x ^ nextHigherOneBit;
	 cout<<rightOnesPattern<<endl;
    // right adjust pattern
    rightOnesPattern = (rightOnesPattern)/rightOne;
 	cout<<rightOnesPattern<<endl;
    // correction factor
    rightOnesPattern >>= 2;
 	cout<<rightOnesPattern<<endl;
    // rightOnesPattern is now part [A] of the above explanation.
 
    // integrate new pattern (Add [D] and [A])
    next = nextHigherOneBit | rightOnesPattern;
    cout<<next<<endl;
  }
 
  return next;
}
 
int main()
{
  int x = 12;
  cout<<"Next higher number with same number of set bits is "<<snoob(x);
 
  return 0;
}
