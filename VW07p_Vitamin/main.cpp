#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,x;
    cin>>n>>x;
    vector <int> h(n);
    vector <int> sum(n);
    cin>>h[0];
    sum[0] = h[0];
    for (int i =1;i<n;i++)
    {
        cin>>h[i];
        sum[i] = sum[i-1] + h[i];
    }
    if (x<h[0]) cout<<"-1";

    return 0;
}
