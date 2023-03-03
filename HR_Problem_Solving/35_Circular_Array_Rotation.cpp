#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{

    int n, q, k;
    cin >> n >> q >> k;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    k %= n

    for (int i = 0; i < q; i++)
    {
        int b;
        cin >> b;

        cout << arr[(n - k + b) % n] << "\n";
    }
    return 0;
}
