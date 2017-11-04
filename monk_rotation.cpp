#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>

#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <cstring>

using namespace std;

#define ull unsigned long long
#define space " "

template <class T> T larger(T a, T b) { return (a > b ? a : b); }
template <class T> T smaller(T a, T b) { return (a < b ? a : b); }
template <class T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }
template <class T> T lcm(T a, T b) { return (a * b)/gcd(a, b); }

template<class T1> void debug(T1 e1)
{
    cout << e1 << endl;
}
template<class T1,class T2> void debug(T1 e1, T2 e2)
{
    cout << e1 << space << e2 << endl;
}
template<class T1,class T2,class T3> void debug(T1 e1, T2 e2, T3 e3)
{
    cout << e1 << space << e2 << space << e3 << endl;
}

#define sf scanf
#define pf printf

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)

#define sf1l(a)              scanf("%ld", &a)
#define sf2l(a,b)            scanf("%ld %ld", &a, &b)
#define sf3l(a,b,c)          scanf("%ld %ld %ld", &a, &b, &c)

#define sf1ll(a)              scanf("%lld", &a)
#define sf2ll(a,b)            scanf("%lld %lld", &a, &b)
#define sf3ll(a,b,c)          scanf("%lld %lld %lld", &a, &b, &c)

int main()
{
    int t, n, i, i2;
    long int k, temp;
    sf1(t);
    while (t--)
    {
        sf1(n);
        sf1l(k);
        k %= n;
        i = n - k;
        i2 = i;
        long int a[i];
        while (i2--)
        {
            sf("%ld", &a[i - i2 - 1]);
        }
        while (k--)
        {
            sf1l(temp);
            pf("%ld ", temp);
        }
        i2 = i;
        while (i2--)
        {
            pf("%ld ", a[i - i2 - 1]);
        }
        pf("\n");
    }
    return 0;
}
