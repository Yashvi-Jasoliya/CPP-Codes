#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    int a=0; int b=0;
    int a0; int a1; int a2;
    cin>>a0>>a1>>a2;
    int b0; int b1; int b2;
    cin>>b0>>b1>>b2;
    if(a0<b0){
        b++;
    }
   if(a0>b0){
        a++;
    }
   if(a1<b1){
        b++;
    }
   if(a1>b1){
        a++;
    }
    if(a2<b2){
        b++;
    }
    if(a2>b2){
        a++;
    }
    
    cout << a <<" "<< b;
    
}