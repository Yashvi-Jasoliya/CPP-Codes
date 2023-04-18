#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> s(k);

    for (int i = 0; i != n; ++i)
    {
        int x;
        cin >> x;
        s[x % k] = s[x % k] + 1;
    }

    int val = min(1, s[0]);

    for (int i = 1; 2 * i <= k; ++i)
    {
        int j = (k - i) % k;

        if (i == j)
        {
            val = val + min(1, s[i]);
        }
        else
        {
            val = val + max(s[i], s[j]);
        }

    }
    
    cout << val << '\n';
    return 0;
}