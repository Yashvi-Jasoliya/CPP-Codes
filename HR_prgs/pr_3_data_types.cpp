#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    
  int x;
  long y;
  char z;
  float w;
  double v;
  
  cin >> x>> y>> z>> w>> v;
  printf("%d\n%ld\n%c\n%0.3f\n%0.9f", *&x,*&y,*&z,*&w,*&v);
  
    return 0;
}
