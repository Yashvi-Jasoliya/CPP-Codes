#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

bool isbeatifulDays(int a, int mod)
{
    int n = a, result, rev = 0;

    while (a > 0)
    {
        rev = rev * 10 + a % 10;
        a /= 10;
    }

    result = abs(n - rev);
    result %= mod;
    return (result == 0);
}

int main()
{
    int S_num, E_n, div, diff = 0; // According que Here S_num is i, E_n is j, divsor is k..
    cin >> S_num >> E_n >> div;

    for (int i = S_num; i <= E_n; i++)
    {

        if (isbeatifulDays(i, div))
        {
            diff++;
        }
        
    }

    cout << diff << "\n";
    return 0;
}
