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

#define sf1l(a)               scanf("%ld", &a)
#define sf2l(a,b)             scanf("%ld %ld", &a, &b)
#define sf3l(a,b,c)           scanf("%ld %ld %ld", &a, &b, &c)

#define sf1ll(a)              scanf("%lld", &a)
#define sf2ll(a,b)            scanf("%lld %lld", &a, &b)
#define sf3ll(a,b,c)          scanf("%lld %lld %lld", &a, &b, &c)

int main()
{
    long int n, i;
    sf1l(n);
    unsigned long long int a[n];
    for (i = 0; i < n; i++)
        sf("%lld", &a[i]);
    long int y[n];
    stack<long int> y1;
    y1.push(0);
    i = 1;
    while (i < n)
    {
        if (a[i] > a[y1.top()])
        {
            while (!y1.empty())
            {
               if (a[y1.top()] < a[i])
               {
                   y[y1.top()] = i + 1;
                   y1.pop();
               }
               else
               {
                   break;
               }
            }
        }
        y1.push(i);
        ++i;
    }
    while (!y1.empty())
    {
        y[y1.top()] = -1;
        y1.pop();
    }

    while (!y1.empty()) y1.pop();
    y1.push(n - 1);
    i = n - 2;
    while (i >= 0)
    {
        if (a[i] > a[y1.top()])
        {
            while (!y1.empty())
            {
               if (a[y1.top()] < a[i])
               {
                   y[y1.top()] += (i + 1);
                   y1.pop();
               }
               else
               {
                   break;
               }
            }
        }
        y1.push(i);
        --i;
    }
    while (!y1.empty())
    {
        y[y1.top()] += -1;
        y1.pop();
    }
    for (i = 0; i < n; i++) pf("%ld ", y[i]);
    return 0;
}
