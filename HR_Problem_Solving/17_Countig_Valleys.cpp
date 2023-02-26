#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int l, count = 0, height = 0;
    string str;
    cin >> l;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++){
        
        if (str[i] == 'D')
        { // OR height==0;
            height--
        }
        else if (str[i] == 'U')
        {
            height++;
        }
        if (str[i] == 'U' && height == 0)
        {
            count++;
        }
   }
    
    cout << count << "\n";
    
}
