#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    char s[100];
    for(int i=0;i<n;i++)
    {
        cin >> s;
        sort(s, s+strlen(s));
        mp[s]++;
    }
    map<string, int>::iterator it;
    int maxi = INT_MIN;
    for(it=mp.begin() ; it != mp.end() ; it++)
        maxi = max(maxi, it->second);
    cout<<maxi<<endl;
}
