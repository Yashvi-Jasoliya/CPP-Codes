#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int t, n, height = 1;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n == 0)
        {
            cout << "1"
                 << "\n";
        }
        else
        {
            bool spr = 1, sum = 0;  // for 1=true 0=false
            
            int height = 1;
            for (int i = 1; i <= n; i++)
            {
                if (spr)
                {
                    height = height * 2;
                    spr = 0;
                    sum = 1;
                }
                else
                {
                    height = height + 1;
                    sum = 0;
                    spr = 1;
                }
           }
            
            cout << height << "\n"
        }
   }
    return 0;
}
