#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n>>n;
    double sum = 0;
    double a[n][n];
    for (int i =0;i<n;i++ )
        for (int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
    for (int i = 0;i<n;i++)
            sum+=a[i][i];
    cout<<sum;
    return 0;
}
