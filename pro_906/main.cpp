#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,s1,kiki,kk;
    int k;
    getline(cin,s);
    //getline(cin,kiki);
    getline(cin,s1);
    //getline(cin,kk);
    cin>>k;
    if (k<0 or k>s.size()) cout<<"Vi tri "<<k<<" khong thoa dieu kien.";
    else
    {
        s.insert(k,s1);
        cout<<s;
    }
    return 0;
}
