#include <bits/stdc++.h>

using namespace std;
int n;
long long c,k;
long long minn = 1e18;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>c>>k;
    vector<long long> h(n + 2);
    vector<long long> f(n + 2);
    h[0] = 0;
    f[0] = 0;
    for (int i =1;i<=n;i++)
    {
        cin >> h[i];
    }
    h[n + 1] = c + 1;
    sort (h.begin(),h.end());
    for (int i = 1; i <= n; i++)
        f[i] = f[i - 1] + h[i];
    int pointer = 1;
    for (int i = 0; i <= n; i++) {
        long long lf = h[i] + 1;
        while (pointer <= n + 1 && h[pointer] - lf < k)
            pointer++;
        if (pointer <= n + 1) {
            long long cost = f[pointer - 1] - f[i];
            minn = min(minn, cost);
        }
    }
        cout<<minn;
    return 0;
}
