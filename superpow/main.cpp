#include <bits/stdc++.h>

using namespace std;
long long pow1(int a,int b)
{
    long long res = 1;
    while(b)
    {
     if (b%2==1) res*=a;
     b/=2;
     a*=a;
    }
    return res;
}

int main()
{
    int n,a;
    freopen("SQUARES.INP","r",stdin);
    freopen("SQUARES.OUT","w",stdout);
    cin>>a>>n;
    cout<<(pow1(4,a+1)-1)/3;
    return 0;
}
