#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n;
    cin >> n;
    int max, min;
    int minCounter = 0;
    int maxCounter = 0;
    cin >> max;
    min = max;

    for (int i = 1; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp > max)
        {
            max = tmp;
            maxCounter++;
        }

        if (tmp < min)
        {
            min = tmp;
            minCounter++;
        }
    }

    cout << maxCounter << " " << minCounter;

    return 0;
}