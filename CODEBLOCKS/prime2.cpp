        #include<stdio.h>
    #define primeLimit 100000


    int prime (long int Start2,  long int Stop2 )
    {
       long int a[primeLimit+1];
       long int i,j,k,l;
       for (i=Start2;i<=Stop2;i++)
       {
           a[i-Start2] = 1;
       }


       for (i=Start2;i<=Stop2;i++)
       {
            if (a[i-Start2]!= 0 && i!=1)
            {
                for (j=3; j*j< i;j=j+2)
                {
                    if(i%j==0)
                        break;

                }
                if(j*j > i)
                {
                    printf(" \n %ld",i);
                    l = i;
                    if (i<=46340)
                    {
                    for (k = i*i; k< Stop2;)
                         {
                                while (k<46340 && (k-Start2 <100000))
                                a[k-Start2] = 0;
                                k = k+l;

                         }
                    }
                }
                else
                {
                    a[i-Start2] = 0;
                }
            }
       }

        return 0;
    }



    int main (void)
    {

       long int start,stop,a,look;

       scanf("%ld", &look);

       for (a=1;a<=look;a++)
       {
           scanf("%ld %ld", &start,&stop);
            prime (start,stop);
       }}

