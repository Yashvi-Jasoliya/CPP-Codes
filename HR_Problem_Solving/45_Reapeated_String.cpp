#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string st;
    cin >> st;
    
    long long n;
    cin >> n;

    long long count = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'a')
        {
            count++;
        }
    }

    long long ans = (n / st.size()) * count;
    for (int i = 0; i < n % st.size(); i++)
    {
        if (st[i] == 'a')
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
