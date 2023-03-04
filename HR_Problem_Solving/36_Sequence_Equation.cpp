#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{

    int n;
    int p[50];
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p[p[j]] == i)
            {
                cout << j << "\n";
            }
        }
    }

    return 0;
}