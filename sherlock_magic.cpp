#include <iostream>
#include <vector>

using namespace std;

struct pkt
{
    int x, y;
    char kier;
    bool jest;
};

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        vector<pkt> p(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> p[j].x >> p[j].y >> p[j].kier;
            p[j].x *= 2;
            p[j].y *= 2;
            p[j].jest = true;
        }
        for (int j = 0; j < 4000; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                if (p[k].jest)
                {
                    if (p[k].kier == 'N') ++p[k].y;
                    if (p[k].kier == 'S') --p[k].y;
                    if (p[k].kier == 'E') ++p[k].x;
                    if (p[k].kier == 'W') --p[k].x;
                }
            }
            for (int k = 0; k < n; ++k)
            {
                if (p[k].jest)
                {
                    vector<int> nry;
                    for (int l = 0; l < n; ++l)
                    {
                        if (l != k && p[l].jest && p[l].x == p[k].x && p[l].y == p[k].y)
                        {
                            nry.push_back(l);
                            p[l].jest = false;
                        }
                    }
                    if (nry.size() != 0) nry.push_back(k);
                    for (int l = 0; l < nry.size(); ++l) p[nry[l]].jest = false;
                }
            }
        }
        int il = 0;
        for (int j = 0; j < n; ++j)
            if (p[j].jest) ++il;
        cout << il << endl;
    }
    return 0;
}
