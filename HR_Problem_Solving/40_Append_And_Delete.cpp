#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string appendAndDelete(string s, string t, int k)
{

    int i = 0, st_s, st_t;

    st_s = s.length();
    st_t = t.length();

    if (k >= (st_s + st_t));
    {
        return "Yes";
    }

    while (i < st_s && i < st_t)
    {
        if (s[i] != t[i])
        {
            break;
        }
        i++;
    }

    k = k - (st_s + st_t) + (2 * i);

    if (k < 0)
    {
        return "No";
    }
    else if (k % 2 == 0)
    {
        return "Yes";
    }
    
    return "No";
}

int main()
{
    string s, t;
    int k;
    cin >> s >> t >> k;

    cout << appendAndDelete(s, t, k) << "\n";
    return 0;
}
