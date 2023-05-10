#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n;
    cin >> n;
    vector<int> c(n, INT_MAX / 2);
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if (p == 1)
        {
            continue;
        }

        if (i == 0)
        {
            c[i] = 0;
        }

        else if (i == 1)
        {
            c[i] = 1 + c[0];
        }

        else
        {
            c[i] = min(c[i - 1], c[i - 2]) + 1;
        }
        }
    cout << c.back() << "\n";

    return 0;
}