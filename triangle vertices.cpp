#include "bits/stdc++.h"
using namespace std;

int main(){

 long double mx1,mx2,mx3,my1,my2,my3;
 cin >> mx1 >> my1;
 cin >> mx2 >> my2;
 cin >> mx3 >> my3;

 long double x1x2x3 = mx1 + mx2 + mx3;
 x1x2x3 = x1x2x3/2;

 long double x1,x2,x3,y1,y2,y3;

 x1 = 2*(x1x2x3 - mx2);
 x2 = 2*(x1x2x3 - mx3);
 x3 = 2*(x1x2x3 - mx1);

 long double y1y2y3 = my1 + my2 + my3;
 y1y2y3 = y1y2y3/2;


 y1 = 2*(y1y2y3 - my2);
 y2 = 2*(y1y2y3 - my3);
 y3 = 2*(y1y2y3 - my1);


    pair<long double,long double> p[3];

    p[0].first = x1;
    p[1].first = x2;
    p[2].first = x3;

    p[0].second = y1;
    p[1].second = y2;
    p[2].second = y3;

    sort(p,p+3);

    x1 = p[0].first;
    x2 = p[1].first;
    x3 = p[2].first;

    y1 = p[0].second;
    y2 = p[1].second;
    y3 = p[2].second;
 printf("%.4Lf %.4Lf\n",x1,y1);
 printf("%.4Lf %.4Lf\n",x2,y2);
 printf("%.4Lf %.4Lf\n",x3,y3);
}
