#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n, a, b;
    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        int q = (int)sqrt(b) - (int)sqrt(a);
        
        if (sqrt(a) - (int)sqrt(a) == 0)
            q++;

        cout << q << "\n"
    }
    return 0;
}
