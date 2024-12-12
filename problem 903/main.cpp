#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for (int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for (int i = 0;i<m;i++)
    {
        cin>>b[i];
    }
    int i = 0,j=0;
    vector<int> c;
    while (i<n || j<m)
    {
        if (j == m || (i<n and a[i] <= b[j]))
            c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    for (auto r:c)
        cout<<r<<" ";
    return 0;
}
