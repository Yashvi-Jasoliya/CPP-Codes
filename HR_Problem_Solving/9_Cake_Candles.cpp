#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    
    int n, max = 0, can, a;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> a;

        if (a > max)
        {
            max = a;
            can = 1;
        }
        else if (a == max)
            can++;
    }

    cout << can;

    return 0;
}
