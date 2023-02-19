#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, max = 0;

    int y;
    cin >> n;
    
    int a[100] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> y;
        a[y]++;
    }

    for (int i = 0; i < n - 1; i++)
    {

        if (a[i] + a[i + 1] > max)
        {
            max = a[i] + a[i + 1];
        }

    }

    cout << max;
    return 0;
}
