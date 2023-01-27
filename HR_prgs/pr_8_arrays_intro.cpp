#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    int i;
    cin>>num;
     int a[num];
    for( i=0; i<num ;i++){
        cin >> a[i];
    }
    for(i = num-1; i>=0; i--){ 
        cout << a[i] << " ";
    }
   
    
    return 0;
}
