#include<iostream>
using namespace std;


void knapsack(int n,float weight[],float profit[],float capacity) 
{ 
float x[n], total_profit = 0;  
int i, j, u;
u = capacity;   
for(i = 0; i < n; i++)      
x[i] = 0.0;   
for(i = 0; i < n; i++) {      
if(weight[i] > u)         
break;      
else
{         
x[i] = 1.0;         
total_profit = total_profit + profit[i];        
u = u - weight[i];      
}  
}  
if(i < n)      
x[i] = u / weight[i];
total_profit = total_profit + (x[i] * profit[i]);
cout<<"\nMaximum profit is:- "<<total_profit; 
}
 
 
 int main() 
 { 
 int n;  
cout<<"Enter the no. of objects:- ";
cin>>n;
float weight[n], profit[n], capacity;      
float ratio[n], temp;   
  
cout<<"\nEnter the wts and profits of each object:-\n "; 
for(int i=0; i < n; i++) {      
cin>>weight[i]>>profit[i]; 
}  
cout<<"\nEnter the capacity of knapsack:- ";   
cin>>capacity;   
for(int i = 0; i < n; i++) {      
ratio[i] = profit[i] / weight[i];  
}
   
for(int i = 0; i < n; i++) {      
for(int j = i + 1; j < n; j++) {         
if(ratio[i] < ratio[j]) {           
temp = ratio[j];        
ratio[j] = ratio[i];           
ratio[i] = temp;           
temp = weight[j];           
weight[j] = weight[i];           
weight[i] = temp;           
temp = profit[j];           
profit[j] = profit[i];           
profit[i] = temp;        
}    
}   
}   
knapsack(n, weight, profit, capacity);  
}
