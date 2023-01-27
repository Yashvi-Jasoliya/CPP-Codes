#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n, q, k, i, j;
   cin>>n>>q;
   vector<vector<int>>arr(n);
   for(i=0;i<n;i++){
       cin>>k;
       arr[i].resize(k);
       for(j=0;j<k;j++){
           cin>> arr[i][j];
       }
   }
   
   for(int x=0; x<q; x++){
       cin>> i>>j;
       cout << arr[i][j]<< endl;
   }
    return 0;
}

