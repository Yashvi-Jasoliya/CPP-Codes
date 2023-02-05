#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// According to given data....

int main()
{
    int n;
    int m;
    int res = 0;

    cin >> n >> m;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }
    vector<int> b(m);
    for (int b_i = 0; b_i < m; b_i++)
    {
        cin >> b[b_i];
    }

    for (int d = 1; d <= 100; d++)
    {

        bool ok = true;
        for (int i = 0; i < n; i++)
            if (d % a[i] != 0)
                ok = false;
        for (int i = 0; i < m; i++)
            if (b[i] % d != 0)
                ok = false;
        if (ok)
            res++;
    }
    cout << res << "\n";
    return 0;
}
