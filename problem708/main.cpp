#include <bits/stdc++.h>

using namespace std;
bool check = true;
int main()
{
    int n;
    cin>>n>>n;
    int count1 = 0;
    int h[n];
    memset(h,0,sizeof(h));
    double a[n][n];
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
        {
            cin>>a[i][j];
        }
    for (int i = 0;i<n;i++)
        if (a[i][i] != 1)
        {
            cout<<"No";
            check = false;
            break;
        }
    if (check == true)
    {
        for (int i = 0;i<n;i++)
        {
             for (int j =0;j<n;j++)
                {
                    if (a[i][j] != 1 && a[i][j] != 0 )
                        h[j] ++;
                }
        }

        for (int i =0;i<n;i++)
            if (h[i] >0) count1 ++;
        if (count1 >1)
        {
            cout<<"No";
        }
        else cout<<"Yes";

    }

    return 0;
}
