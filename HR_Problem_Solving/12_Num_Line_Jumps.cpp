#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int x1, v1;
    int x2, v2;
    
    cin >> x1 >> v1;
    cin >> x2 >> v2;
    
    if ((v1 <= v2) || ((x2 - x1) % (v2 - v1)))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    
    return 0;
}
