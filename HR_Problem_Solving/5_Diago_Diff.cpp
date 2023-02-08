#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int main()
{
int n;
cin>>n;

int L_diago_sum =0; int R_diago_sum=0;
int a[n][n];
    
for(int i=0; i<n; i++){
     for(int j=0; j<n ; j++){
        cin>>a[i][j];
         
        if(i==j){
            L_diago_sum = L_diago_sum +a[i][j];
        }
        if(i+j == n-1){
             R_diago_sum = R_diago_sum +a[i][j];
        }
         
    }
}

cout<< abs (L_diago_sum - R_diago_sum) <<"\n";
    
}
