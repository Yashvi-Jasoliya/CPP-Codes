#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    string s;
    int height[50];

    for (int i = 0; i < 26; i++)
    {
        cin >> height[i];
    }
    
    cin >> s;
    int len, hei = 0;
    len = s.length();

    int temp;
    int var;

    for (int i = 0; i < len; i++)
    {
        char ch = s[i];
        
        temp = int(ch);
        temp = temp - 97;
        var = height[temp];

        if (var >= hei)
        {
            hei = var;
        }
    }

    cout << len * hei << "\n";
}
