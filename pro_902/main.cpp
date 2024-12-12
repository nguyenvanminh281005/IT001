#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    vector <int> h;
    for (int i =0;i<n;i++)
    {
        int hi;
        cin>>hi;
        h.push_back(hi);
    }
    int maxx = h[0];
    for (int i =0;i<n;i++)
    {
        if (h[i]>maxx)
        {
            maxx = h[i];
        }
    }
    for (int i =0;i<n;i++)
    {
        if (h[i] == maxx)
            cnt++;
    }
    cout<<maxx<<'\n';
    cout<<cnt;
    return 0;
}
