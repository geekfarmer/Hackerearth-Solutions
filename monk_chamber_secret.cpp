#include <bits/stdc++.h>

using namespace std;

int main()
{


    int n , dg ;
    cin>> n >> dg ;
    queue<int> q ;
    int ans = 0 ;
    int a[n+1] ;
    for (int i=1;i<=n;i++)
    {
 cin>>a[i] ;
 q.push(i) ;
    }
    int ind, x ;
    bool rem[n+1] ;
    memset(rem,false,sizeof(rem)) ;
    int temp = 0, ele ;
    int left = n ;
    for (int i=0;i<dg;i++)
    {
 temp = 0 ;
 ele = min(dg,left) ;
 ans = -1 ;
 //cout<<ele<<" ele"<<endl ;
 while (temp < ele)
 {
     x = q.front() ;
     if (rem[x]) {
  q.pop() ;
  continue ;
     }
     if (a[x] > ans) {
  ans = a[x] ; ind = x ;
     }
     //cout<<x<<" x"<<endl ;
     q.pop() ;
     q.push(x) ;
     temp++ ;
     if (a[x]) a[x]-=1 ;
 }
 rem[ind] = true ;
 cout<<ind<<" "  ;
 left-- ;
    }
    cout<<endl ;

    return 0;
}
