#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string s;
    cin >> s;
    long long n;
    cin >> n;

    long long count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }

    long long ans = (n / s.size()) * count;

    for (int i = 0; i < n % s.size(); i++)
    {
        if (s[i] == 'a')
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
