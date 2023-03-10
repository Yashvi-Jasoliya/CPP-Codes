#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void findDigits()
{
    int n;
    cin >> n;

    int n_val = n;
    int sol = 0;

    while (n_val > 0)
    {
        int x = n_val % 10;
        n_val = n_val / 10;

        if (x != 0 && n % x == 0)
        {
            sol++;
        }
    }

    cout << sol << "\n";
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        findDigits();
    }

    return 0;
}
