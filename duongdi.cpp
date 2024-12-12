#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

const int N = 1005;

int m, n, a[N][N], f[N][N];

char truy[N][N];

pair <int, string> check(int val)
{
    for (int i = 0; i <= m + 1; i++)
        for (int j = 0; j <= n + 1; j++)
            f[i][j] = 1e9 + 7;
    f[0][1] = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            int tmp = a[i][j], cur = 0;
            if (tmp == 0)
                cur = 1e9 + 7;
            else
                while (tmp % val == 0 && tmp != 0)
                {
                    cur++; tmp = tmp / val;
                }
            if (f[i - 1][j] < f[i][j - 1])
            {
                truy[i][j] = 'D';
                f[i][j] = f[i - 1][j] + cur;
            }
            else
            {
                truy[i][j] = 'L';
                f[i][j] = f[i][j - 1] + cur;
            }
        }
    pair <int, string> ans;
    ans.fi = f[m][n];
    int x = m, y = n;
    while (x != 1 || y != 1)
    {
        ans.se = ans.se + truy[x][y];
        if (truy[x][y] == 'D')
            x--;
        else
            y--;
    }
    reverse(ans.se.begin(), ans.se.end());
    return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n;
    int hang = 0, vt = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
                if (i > hang)
                {
                    hang = i; vt = j;
                }
        }
    pair <int, string> ans2 = check(2);
    pair <int, string> ans5 = check(5);
    pair <int, string> ans0, ans;
    ans = min(ans2, ans5);
    if (hang != 0)
    {
        ans0.fi = 1;
        for (int i = 1; i < hang; i++)
            ans0.se += 'D';
        for (int i = 1; i < vt; i++)
            ans0.se += 'L';
        for (int i = hang; i < m; i++)
            ans0.se += 'D';
        for (int i = vt; i < n; i++)
            ans0.se += 'L';
        ans = min(ans, ans0);
    }
    cout << ans.fi << "\n" << ans.se;
    return 0;
}
