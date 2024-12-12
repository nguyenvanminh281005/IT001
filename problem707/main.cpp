#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n>>n;
    int count1 = 0;
    double a[n][n],b[n][n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
        {
            b[i][j] = a[i][j];
        }
    for (int i=0;i<n;i++)
        for (int j = 0;j<n;j++)
        {
             if (a[i][j] == b[j][i])
                {
                    count1++;
                }
        }
    if (count1 == n*n)
        cout<<"Yes";
    else cout<<"No";


    return 0;
}
