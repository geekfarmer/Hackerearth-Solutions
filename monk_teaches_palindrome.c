#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
bool flag;
string s1 ;
cin>> s1 ;
int n,temp;
n=s1.length() ;
char s[n];
for(int i=0 ;i<n;i++)
s[i]=s1[i] ;
for(int i=0 ,j=n-1;i<j;j--,i++)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
for(int i=0 ;i<n;i++)
{
if (s[i]==s1[i])
{
flag=true;

}
else
{
flag=false;
break;

}

}
if (flag)
{
cout<<"YES ";
if (n%2)
cout<<"ODD"<<endl;
else
cout<<"EVEN"<<endl;

}

else
cout << " NO" <<endl;

    }
}
