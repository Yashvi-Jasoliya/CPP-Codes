#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{
    int n, k;
    vector<int> c(n);
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int e = 100;
    int clo = 0;

    while (true)
    {
        clo = clo + k;
        clo = clo % n;

        if (c[clo])
        {
            e = e - 2;
        }
        e--;

        if (clo == 0)
        {
            break;
        }
    }

    cout << e << "\n";

    return 0;
}
