#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    vector <double> h;
    for (int i = 0;i<m*n;i++)
    {
        double hi;
        cin>>hi;
        h.push_back(hi);
    }
    for (int i =0;i<h.size();i++)
    {
        cout<<h[i]<<" ";
        if ((i+1)%n == 0) cout<<'\n';
    }
    return 0;
}
