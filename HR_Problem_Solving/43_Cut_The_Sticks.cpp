#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    if (n == 1)
    {
        cout << "1";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    int count = 1;
    cout << n << "\n";

    int ans = n;
    for (int i = 1; i < n; i++){
        
        if (arr[i] != arr[i - 1])
        {
            ans = ans - count;
            cout << ans << "\n";
            count = 1;
        }
        else
        {
            count++;
        }
    }
    
    return 0;
}
