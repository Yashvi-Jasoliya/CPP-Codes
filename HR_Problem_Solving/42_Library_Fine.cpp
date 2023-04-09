#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if (y1 > y2)
    {
        cout << 10000 << "\n";
    }
    else if ((y2 == y1) && (m1 > m2))
    {
        cout << (m1 - m2) * 500 << "\n";
    }
    else if ((d1 <= m2) && (m1 <= m2) && (y1 <= y2) || (y1 < y2) || (m1 < m2) && (y1 <= y2))
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << (d1 - d2) * 15 << "\n";
    }

    return 0;
}