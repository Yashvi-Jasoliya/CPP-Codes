#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void climbingLead(stack<long int> score, vector<int> alice)
{
    for (int i = 0; i < alice.size(); i++)
    {

        while (!score.empty() && alice[i] >= score.top())
        {
            score.pop();
        }

        cout << score.size() + 1 << "\n";
    }
}

int main()
{
    
    int n;
    cin >> n;

    stack<long int> score;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (score.empty() || score.top() != temp)
        {
            score.push(temp);
        }
    }

    int m;
    cin >> m;

    vector<int> alice(m);
    for (int i = 0; i < m; i++)
    {
        cin >> alice[i];
    }
    climbingLead(score, alice);

    return 0;
}
