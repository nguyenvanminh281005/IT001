#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,l,k;
    cin>>m>>n;
    float a[m][n];
    for (int i =0;i<m;i++)
        for (int j = 0;j<n;j++)
        {
            cin>>a[i][j];
        }
    cin>>l>>k;
    float b[l][k];
    for (int i = 0;i<l;i++)
        for (int j = 0;j<k;j++)
            {
                cin>>b[i][j];
            }
    float c[m][k];
    memset(c,0,sizeof(c));
    for (int x = 0;x<m;x++)
        for (int y = 0;y<k;y++)
        {
            for (int z = 0;z<l;z++)
                {
                    c[x][y]+=a[x][z]*b[z][y];

                }
        }

    for (int i = 0;i<m;i++)
    {
        for (int j =0;j<k;j++)
                {
                    cout<<c[i][j]<<" ";
                }
        cout<<'\n';
    }
    return 0;
}
