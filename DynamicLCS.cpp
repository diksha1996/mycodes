//Algorithm for longest common subsequence
#include<iostream>
#include<String.h>
#include<string>
using namespace std;

int main(){
	
	string a;
	string b;
	cout<<"\nEnter 2 strings\n"<<endl;
	cin>>a;
	cin>>b;
	int m = a.length();
	int n = b.length();
	int LCS[m+1][n+1];
	
 for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         LCS[i][j] = 0;
       else if (a[i-1] == b[j-1])
         LCS[i][j] = LCS[i-1][j-1] + 1;
       else
         LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
     }
   }
	
	int k=LCS[m][n];
	
	    cout<<"\n\nLENGTH OF LONGEST COMMON SUBSEQUENCE IS :- "<<LCS[m][n]<<endl;
		cout<<"\nLONGEST COMMON SUBSEQUENCE IS::\n\n";
		
		//for printing LCS
		 int i = m, j = n;
		  char lcs[k+1];
		 lcs[k]='\0';
   while(i>0 && j>0)
   {
      if (a[i-1] == b[j-1])
      {
          lcs[k-1] = a[i-1]; 
          i--; j--; k--;     
      }
   else if (LCS[i-1][j] > LCS[i][j-1])
         i--;
      else
         j--;
   }
   cout<<lcs<<endl;
 

}
