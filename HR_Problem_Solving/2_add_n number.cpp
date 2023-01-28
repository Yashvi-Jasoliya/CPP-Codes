#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
{
    long int n;
    int num;
    int sum = 0;
    //   cout<< "Enter a number:";

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        sum = sum + num;
    }
    cout << sum;

    return 0;
}
