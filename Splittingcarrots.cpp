#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

const int N = 102;
const int VAL_MAX = 2002;

int sum, n, a[N];

pair <int, int> b[N];

bool val[N * VAL_MAX];

bool check()
{
    val[0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int cur = sum / 2; cur >= 0; cur--)
        {
            if (cur < b[i].fi)
                break;
            val[cur] = val[cur] | val[cur - b[i].fi];
        }
    }
    return val[sum / 2];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        b[i] = {a[i], i};
    sort(b + 1, b + 1 + n);
    bool le = false;
    int vt;
    for (int i = 1; i <= n; i++)
    {
        if (b[i].fi % 2)
        {
            le = true;
            vt = b[i].se;
        }
        sum = sum + b[i].fi;
    }
    if (sum % 2 != 0)
        cout << 0;
    else
        if (check() == false)
            cout << 0;
        else
            if (le)
            {
                cout << 1 << "\n" << vt;
            }
            else
            {
                cout << 1 << "\n" << b[1].se;
            }
    return 0;
}
