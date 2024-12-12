#include <bits/stdc++.h>

using namespace std;

int m,n;
double a[1000][1000];
double h[1000];
void input()
{
    cin>>m>>n;
    for(int i = 0;i<m;i++)
        for(int j  =0;j<n;j++)
        cin>>a[i][j];
    memset (h,0,sizeof(h));
}
void check()
{
    for (int i =0;i<m;i++)
       for (int j = 0;j<n;j++)
       {
           if (a[i][j] > h[j])
            h[j] = a[i][j];
       }
}
int main()
{
    input();
    check();
    for (int i  =0;i<n;i++)
        cout<<"Gia tri lon nhat tren cot "<<i<<" la: "<<h[i]<<'\n';
    return 0;
}
