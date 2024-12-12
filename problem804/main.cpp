#include <bits/stdc++.h>

using namespace std;
string s;
vector <char> h;
int count1 = 0;
int a[1000];
int main()
{
    /*getline(cin,s);
    if (s.size() == 0) cout<<"Chuoi rong.";
    h.push_back(s[0]);
    for (int i = 0;i<s.size();i++)
    {
        count1 = 0;
        for (int j = 0;j<h.size();j++)
        {
            if (s[i] != h[j])
            count1 ++;
        }
        if (count1 == h.size()) h.push_back(s[i]);
    }
    for (int i = 0;i<h.size();i++)
        for (int j = 0;j<s.size();j++)
            {
                if (s[j] == h[i]) a[i] ++;
            }
    for (int i = 0;i<h.size();i++)
    {
        cout<<h[i]<<": "<<a[i]<<'\n';
    }*/
    void DemKyTu(char s[])
    {
        int len = myStrlen(s,0);
        int check[256] = {0};
        bool c[256] = {0};
        int cnt = 0;
        for (int i = 0;i<len;i++)
        {
            check[s[i]]++
        }
        for (int i = 0;i<len;i++)
        {
            if (c[s[i]]||s[i]=='\0') continue;
            cout<<s[i]<<": "<<check[s[i]]<<'\n';
            c[s[i]] = true;
        }
    }
    int myStrcmp (char s1[MAX],chars2[MAX])
    {
        if (s1[0] =='\0' && s2[0] == '\0') return 0;
        return 1;
    }
    int myStrlen(char s[],int k)
    {
        int len = 0;
        for (k;k<300;k++)
        {
            len++;
            if (s[k] == '\0') break;
        }
        return 0;
    }
    return 0;
}
