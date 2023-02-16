#include <bits/stdc++.h>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    
    int min_left = 0, min_right = 0;
    int c_left = 0, c_right = 1;
    
    while (c_left != p && c_right != p)
    {
        min_left++;
        c_left = c_left + 2;
        c_right = c_right + 2;
    }
    
    c_left = n % 2 == 0 ? n : n - 1;
    c_right = c_left + 1;

    while (c_left != p && c_right != p)
    {
        min_right++;
        c_left = c_left - 2;
        c_right = c_right - 2;
    }

    cout << std::min(min_left, min_right);
    
    return 0;
}
