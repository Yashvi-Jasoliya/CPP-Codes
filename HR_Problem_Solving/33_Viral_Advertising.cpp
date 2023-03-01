#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int viralAdvertising(int n)
{

    int shared_Ad = 5, cumulative_likes = 0;
    int liked_Ad = 2;

    for (int i = 1; i <= n; i++)
    {
        liked_Ad = floor(shared_Ad / 2);
        shared_Ad = liked_Ad * 3;
        cumulative_likes = cumulative_likes + liked_Ad;
    }

    return cumulative_likes;
    
}

int main()
{
    int n;
    cin >> n;
    cout << viralAdvertising(n)

    return 0;
}
