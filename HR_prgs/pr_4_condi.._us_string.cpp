#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n ;
   cin >> n;
    string alpha[15] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if(n>=1 && n<=9){
        cout << alpha[n-1];
    }
   else{
    cout<< "Greater than 9";
}    
    

    return 0;
}