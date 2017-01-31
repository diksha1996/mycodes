#include <stdio.h>
#define m 1000000007
/* Iterative Function to calculate (x^n)%p in O(logy) */
long long power(int x, unsigned int y, long long p)
{
    long long res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
 
// Driver program to test above functions
int main()
{
   int x = 2;
   int y = 40;
   long long p = 1000000007;
   printf("Power is %lld", power(x, y, p));
   return 0;
}
