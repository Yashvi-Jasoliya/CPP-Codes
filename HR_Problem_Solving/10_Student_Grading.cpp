#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
    
       int grade;
        cin >> grade;
        
        if (grade >= 38)
        {
            int rem = grade % 5;

            if (rem >= 3)
            {
                grade = grade + 5 - rem;
            }
        }
        
        cout << grade << "\n";
    }
    
    return 0;
}
