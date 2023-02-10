#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{

    int s, n, m;
    cin >> s >> n >> m;

    vector<int> k(n), u(m);
    for (auto &e : k)
        cin >> e;
    for (auto &e : u)
        cin >> e;

    int max = -1;
    for (int i = 0, j, t; i < k.size(); ++i)
    {
        for (j = 0; j < u.size(); j++)
        {
            t = k[i] + u[j];
            if (t > max && t <= s)
            {
                max = t;
            }
        }
    }
    cout << max << '\n';
    return 0;
}
