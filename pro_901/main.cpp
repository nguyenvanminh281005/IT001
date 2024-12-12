#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int>h;
    for (int i =0;i<n;i++)
    {
        int hi;
        cin>>hi;
        h.push_back(hi);
    }
    for (int i = 1;i<n;i+=2)
        cout<<h[i]<<" ";
    return 0;
}
