#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main()
 {
    int n,p1=0,n1=0,z1=0;
    cin >> n;
    
 vector<int> arr(n);
    
 for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        
         if(arr[arr_i]>0)
        {
         p1++;
        }    
  
         if(arr[arr_i]<0)
        {
            n1++;
        }
  
        if(arr[arr_i]==0)
        {
         z1++;
        }
  
  }
        cout<<setprecision(6)<<(float)p1/n<<"\n";
        cout<<setprecision(6)<<(float)n1/n<<"\n";
        cout<<setprecision(6)<<(float)z1/n<<"\n";
 
    return 0;
}
