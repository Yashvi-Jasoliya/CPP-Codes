#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<string> split(const string &);
#define FI(i, a, b) for (int i = (a); i <= (b); i++)
#define FD(i, a, b) for (int i = (a); i >= (b); i--)

#define PI 3.14;

using namespace std;

int n, a[105], x;

int main()
{
    scanf("%d", &n);
    
    FI(i, 1, n)
    {
        scanf("%d", &x);
        a[x]++;
    }

    int ans = 0;
    FI(i, 1, 100)
    ans = ans + a[i] / 2
    printf("%d\n", ans);
    return 0;
}
