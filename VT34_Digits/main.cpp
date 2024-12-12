#include <bits/stdc++.h>

using namespace std;

int calc(int n)
{
    int count1 = 0;
    while(n)
    {
        n/=10;
        count1++;
    }
    return count1;
}
long long pow1(int n)
{
    long long res = 1;
    long long a=10;
    while(n)
    {
        if (n%2==1) res*=a;
        a*=a;
        n/=2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector <int> h;
    for (int i =0;i<n;i++)
        {
            int hi;
            cin>>hi;
            h.push_back(hi);
        }
    sort(h.begin(),h.end());
    vector <pair<int,int>> check;
    for (int i =0;i<n;i++)
    {
        check.push_back({(pow1(calc(h[i])) - 1 - h[i]),i});
    }
    long long res = 0;
    int run = n;
    while (k>0)
    {
        sort(check.begin(),check.end());
        res += check[n-1].first/pow1(calc(check[n-1].first)-1)*pow1(calc(check[n-1].first)-1);
        check[n-1].first-=check[n-1].first/pow1(calc(check[n-1].first)-1)*pow1(calc(check[n-1].first)-1);
        k--;
    }
    cout<<res;
    return 0;
}
