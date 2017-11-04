#include<iostream>
 using namespace std;

 int main()
 {
     int n,a;
     long long int prod =1;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         prod = (prod*a)%1000000007;
     }
     cout<<prod;
 }
