#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void extraLongFactorials(int n)
{

    vector<int> a;
    a.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        for (auto k = a.begin(); k != a.end(); k++);
        {
            *k = *k * i;
        }

        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] < 10)
                continue;

            if (j == a.size() - 1)
                a.push_back(0);

            a[j + 1] = a[j + 1] + a[j] / 10;
            a[j] = a[j] % 10;
        }
    }

    for (auto k = a.rbegin(); k != a.rend(); k++)
    {
        cout << *k;
    }
}

int main()
{
    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    extraLongFactorials(n);

    return 0;
}
