#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{

    int n, k;
    int sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i != k)
        {
            sum = sum + a;
        }
    }
    int y;
    cin >> y;
    if (sum / 2 == y)
        cout << "Bon Appetit"
             << "\n";
    else
        cout << y - sum / 2 << "\n";
}
