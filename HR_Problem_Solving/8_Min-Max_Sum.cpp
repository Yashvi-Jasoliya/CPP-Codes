#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){

 int val,i;
 int sum=0;
vector<int> array;
 
for(i=0; i<5; i++){
        cin>>val;
        sum= sum + val;
        array.push_back(val);
 }

        sort(array.begin(), array.end());   
        cout<<sum-array[4]<<" "<<sum-array[0];  
 
        return 0;
}
   


