#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;

    cin >> s >> k;

    assert(k >= 0 && k <= 9);
    assert(s.size() >= 1 && s.size() <= 19);

    if ( s.size() == 19 ) assert(s == "1000000000000000000");

    for ( int i = 0; i < s.size(); i++ ) assert(s[i] >= '0' && s[i] <= '9');

    for ( int i = 0; i < s.size() && k > 0; i++ ) {
        if ( s[i] == '9' ) continue;
        s[i] = '9', k--;
    }

    cout << s << endl;

    return 0;
}
