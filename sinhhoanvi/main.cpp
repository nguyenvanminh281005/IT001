#include <bits/stdc++.h>

using namespace std;

int N,X[10],used[10];
void inkq()
{
    for (int i = 1;i<=N;i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<'\n';
}
void Try(int i)
{
    for (int j = 1;j<=N;j++)
    {
        if (used[j] == 0)
        {
            X[i] = j;
            used[j]=1;
            if ( i == N) inkq();
            else Try(i+1);
            used[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>N;
    Try(1);
    return 0;
}
