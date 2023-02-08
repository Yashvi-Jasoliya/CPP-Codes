#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int n, d, m;
int a[100], s[100], ans;
int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    
    cin >> d;
    cin >> m;

    for (int i = m; i <= n; i++)
    {

        if (s[i] - s[i - m] == d)
        {
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}