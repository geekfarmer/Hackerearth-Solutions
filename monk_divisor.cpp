#include<iostream>
#include<cstdio>
#include<array>
#include<ctime>
#include<vector>
using namespace std;
long int GCD(long int a,long int b);
int main(){
array<long int,200001> arr,fx;
arr.fill(0);
fx.fill(0);
long int n;
scanf("%ld",&n);
vector<long int> vec;
long int a,temp,maxm =-1;
for(a = 0;a<n;a++){
    scanf("%ld",&temp);
    vec.push_back(temp);
    if(temp>maxm){
        maxm = temp;
    }
    arr[temp]++;
}
long int i,j;
for(i =1;i<=maxm;i++){
    j = i;
    for(;j<=maxm;j=j+i){
        fx[i] = fx[i]+arr[j];
    }
}

long int t;
scanf("%ld",&t);
long int p,q,lcm,gcd,l,m,z;
for(a =0;a<t;a++){
    scanf("%ld%ld",&p,&q);
    gcd = GCD(p,q);
    if(gcd==0)
        gcd = p*q;
    lcm = (p*q)/gcd;
    l = fx[p];
    m = fx[q];
    if(lcm>maxm)
        z =0;
    else
        z = fx[lcm];
    cout<<(l+m-z)<<endl;
}
return 0;
}
long int GCD(long int a,long int b){
 if(b==0)
        return a;
 else
        return GCD(b,a%b);


}
