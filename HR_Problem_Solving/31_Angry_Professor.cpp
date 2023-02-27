#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int x, y, k = 0;
        cin >> x >> y;
        
        for (int i = 0; i < x; i++)
        {
            int a_t;
            cin >> a_t;

            if (a_t <= 0)
            {
                k++;
            }
        }

        if (k >= y)
        {
            cout << "NO" << '\n'
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
