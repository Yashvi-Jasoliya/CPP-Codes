#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function 
    int sum = *a + *b;
    int mode;
    if(*a>*b){
        mode = *a-*b;
    }   
    else{
        mode = *b-*a;
    }
    
    *a = sum;
    *b = mode;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
     cin >> a>>b;
    // scanf("%d %d", &a, &b);
    update(pa, pb);
    cout << a << '\n' << b;
    // printf("%d\n%d", a, b);

    return 0;
}