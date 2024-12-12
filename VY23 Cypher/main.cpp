#include <bits/stdc++.h>

using namespace std;

string s;
bool check = false;
vector <int> h;
int count1 = 0,sum=0;
long long res = 0;
void input()
{
    cin>>s;
}
void solve ()
{
    for (int i = 97;i<123;i++)
    {
        count1 = 0;
        for (int j = 0;j<s.size();j++)
        {
            if (i == int(s[j]))
            {
                count1++;
            }
        }
        if (count1>1) check = true;
        if (count1>0) h.push_back(count1);
    }
    for (int i =0;i<h.size();i++)
        {
            sum +=h[i];
        }
    for (int i = 0;i<h.size();i++)
        {
            res += h[i]*(sum - h[i]);
            sum -= h[i];
        }
        if (check == true) cout<<res+1;
        else cout<<res;
}
int main()
{
    input();
    solve();
    return 0;
}
