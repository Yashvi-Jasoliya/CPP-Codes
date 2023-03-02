#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n_p, n_s, n_c;     // According to given Data n_p=n, n_s=m, n_c=s
        cin >> n_p >> n_s >> n_c;

        n_c--;
        n_s--;

        n_c = n_c + n_s;
        n_c = n_c % n_p;
        n_c++;

        cout << n_c << "\n";

    }

    return 0;
}