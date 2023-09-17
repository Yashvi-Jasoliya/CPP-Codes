#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
    
       int grade;
       cin >> grade;
        
        if (grade >= 38)
        {
            int reminder = grade % 5;

            if (reminder >= 3)
            {
                grade = grade + 5 - reminder;
            }
        }
        
        cout << grade << "\n";
    }
    
    return 0;
}
