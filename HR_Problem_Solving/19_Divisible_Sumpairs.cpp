#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){

    int n, k;
    int count = 0;

    cin >> n >> k;

    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if (i < j)
            {
                if ((array[i] + array[j]) % k == 0)
                    count++;
            }
            
        }
    }
    
    cout << count;

    return 0;
}
