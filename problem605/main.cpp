#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> h;
    for (int i = 0;i<n;i++)
    {
        int hi;
        cin>>hi;
        h.push_back(hi);
    }
    int x,k;
    cin>>x>>k;
    h.insert(h.begin()+k, x);
    for (auto r:h)
        cout<<r<<" ";
    return 0;
}
