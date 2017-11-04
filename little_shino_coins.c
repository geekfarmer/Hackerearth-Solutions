#include<bits/stdc++.h>
using namespace std;
int main()
{
int k;
cin>>k;
getchar();
char a[100000];
gets(a);
int len=strlen(a);
long long c=0;
for(int i=0;i<len;i++){
set<long long>s;
for(int j=i;j<len;j++){
s.insert(a[j]);
if(s.size()==k)
c++;
}
}
cout<<c<<endl;
}
