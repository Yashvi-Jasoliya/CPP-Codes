#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if(b>c && b>d)
    {
    return b;    
    }
    else if(c>d){
        return c;
    }
    else{
        return d;
    }
}


int main() {
    int x, y, z, w;
    cin >> x>> y>> z>> w;
    int ans = max_of_four(x, y, z, w);
    cout << ans;
    
    return 0;
}