#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> h1(2);
    vector <int> h2(2);
    for (int i=0;i<h1.size();i++)
    {
        cin>>h1[i];
    }
    for (int i=0;i<h1.size();i++)
    {
        cin>>h2[i];
    }
    int sum = h1[0]*h2[0] + h1[1]*h2[1];
    cout<<sum;
    return 0;
}
