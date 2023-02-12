#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e5 + 10;
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n, mb;
    int a[6] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> mb;
        a[mb]++;
    }


    int max = a[1], result = 1;

    for (int i = 2; i < 6; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            result = i;
        }
        else if (a[i] == max)
        {
            result = result < i ? result : i;
        }
    }

    cout << result;
}