#include <bits/stdc++.h>

using namespace std;

long long lf,rt;
void input()
{
    cin>>lf>>rt;
}
long long calc(long long u)
{
    long long res =0,k=1;
    for (int i = 1;i<=60;i++)
    {
        k*=2;
        res+=u/k;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    input();
    long long ress = calc(rt) - calc(lf-1);
    cout<<ress;
    return 0;
}
