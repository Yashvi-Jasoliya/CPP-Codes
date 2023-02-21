#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n, k;
    int max_A = 0;
    cin >> n >> k;
    
    vector<int> height(n);

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
        max_A = max(max_A, height[i]);
    }
   
    cout << max(0, max_A - k)

    return 0;
}
