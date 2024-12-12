#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> h;
    for (int i =0;i<n;i++)
    {
        int hi;
        cin>>hi;
        h.push_back(hi);
    }
    int x;
    cin>>x;
    for (auto r:h)
        if (r !=x)
            cout<<r<<" ";
    return 0;
}
