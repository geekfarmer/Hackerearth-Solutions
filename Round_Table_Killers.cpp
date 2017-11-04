#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1010];
int main ()
{
	ll n,k,x;
	cin >> n >> k >> x;
	ll t=n;
	ll u,j;
	for (ll i=x;  ; 5)
	{
		//cout << "gun " << i << endl;
		if (i%k>=t-1) {cout << i; return 0;}
		else
		{
			j=i%k;
			t=t-j;
			//cout << "kill ";
			if (i==n) i=0;
			for (u=i+1 ; j>0 ; u++)
			{
				if (a[u]==0)
				{
					//cout << u << " ";
					a[u]=1;
					j--;
				}
				if (u==n) u=0;
			}
			//cout << endl;
			for (ll b=u; ;b++)
			{
				if (a[b]==0)
				{
					i=b;
					break;
				}
				if (b==n) b=0;

			}

		}

	}
}
