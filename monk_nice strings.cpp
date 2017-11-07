#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

struct S{
    char v[11];
};

int main()
{
   // cout << "Hello World!" << endl;
    vector<S> a;
    S s;
    int n,i,count,j,k;
    //char str[11];

    cin >>n;
    for(i=0; i<n; i++)
    {
        cin >> s.v;
        a.push_back(s);

    }
    cout << '0' << "\n";
    for(i=1; i<n; i++)
    {
        count=0;k=i;
        for(j=k; j>0; j--)
        {
            if(strcmp(a[k].v,a[j-1].v) > 0)
                count++;
        }
        cout << count <<"\n";
    }

    return 0;
}
