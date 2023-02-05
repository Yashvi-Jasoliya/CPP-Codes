#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


int main()
{
    int aa;
    int oo;
    aa = oo = 0;
    int s,t,a,b,m,n,x;
    scanf("%d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);
    
    while(m--)
    {
        scanf("%d",&x);
        if(s <= a+x && a+x <= t) aa++;
    }

    while(n--)
    {
        scanf("%d",&x);
        if(s <= b+x && b+x <= t) oo++;
    }

    printf("%d\n%d\n",aa,oo);

    return 0;
}
