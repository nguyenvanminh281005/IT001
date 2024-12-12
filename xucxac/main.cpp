#include <bits/stdc++.h>

#define maxn 1000006

using namespace std;

using ll = long long ;
int f[maxn];
int main()
{
    int n; cin>>n;
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    vector<int> a(n);
    for (int i =0;i<n;i++) cin>>a[i];
    int ans = 0;
    for (int i =1;i<=n;i++)
    {
        f[i] = 1;
        for (int j = 1;j<i;j++)
        {
            if (a[j]<a[i])
            {
                f[i] = max(f[i],f[j]+1);
            }
        }
        ans = max(ans,f[i]);
    }
    cout<<ans;
}
