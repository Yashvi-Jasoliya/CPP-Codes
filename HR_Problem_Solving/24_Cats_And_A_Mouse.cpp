#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int d1 = abs(x - z);
        int d2 = abs(y - z);

        if (d1 < d2)
        {
            cout << "Cat A"
                 << "\n";
        }
        else if (d1 > d2)
        {
            cout << "Cat B"
                 << "\n";
        }
        else if(d1 = d2)
        {
            cout << "Mouse C"
                 << "\n";
        }
    }

    return 0;
}