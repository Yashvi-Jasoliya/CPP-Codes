#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i -1; j++) {
            printf(" ");
        }
        for (int j = n - i -1; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
    