#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int main()
{
    int n;
    cin>>n;
    int num;
    long int sum=0;
    
    for(int i=0; i<n; i++){
      cin>>num;
      sum= sum +num;
    }
    
    cout<<sum;
}
