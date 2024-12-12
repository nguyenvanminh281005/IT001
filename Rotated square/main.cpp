#include <bits/stdc++.h>

using namespace std;

int N,n;
char a[1010][1010], b[1010][1010], c[1010][1010];
int count1 = 0,count2 = 0;
vector <int> h;

void check()
{
    count2 = 0;
    for (int i = 0;i<N-n+1;i++)
        for (int j = 0;j<N-n+1;j++)
        {
            count1 = 0;
            if (a[i][j] == b[0][0])
            {
                for (int k = 0;k<n;k++)
                    for (int l = 0;l<n;l++)
                    {
                        if (a[i+k][j+l] == b[k][l])
                            count1++;
                        else
                        {
                            count1 = 0;
                            break;
                        }

                    }
            }
            if (count1 == n*n)
                count2 ++;
        }
        h.push_back(count2);
}
void change()
{
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
        {
            c[i][j] = b[i][j];
        }
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
    {
        b[i][j] = c[n-j-1][i];
    }
}
int main()
{
    while (true)
    {
        cin>>N>>n;
        if (N==0 &&n==0)
            break;
        for (int i = 0;i<N;i++)
            for (int j = 0;j<N;j++)
            cin>>a[i][j];
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++)
            cin>>b[i][j];

        check();
        change();
        check();
        change();
        check();
        change();
        check();
        for (auto r:h)
            cout<<r<<" ";
        cout<<'\n';
        h.clear();
    }

    return 0;
}
