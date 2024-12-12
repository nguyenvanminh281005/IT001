#include <bits/stdc++.h>

using namespace std;
string s;
string cons = "bcdfghjklmnpqrstvxz";
string O[2] = {"bcdfghjklmnpqrstvxz","BCDFGHJKLMNPQRSTVXZ"};
int f[19][19]={0}, _2pow19 = 1<<19;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>s;
    int i,j,len1,p1,p2,k,t,sum,kmax;
    len1 = s.size()-1;
    for (i=0;i<len1;i++)
    {
        p1 = cons.find(s[i]);
        p2 = cons.find(s[i+1]);
        if ((p1!=string::npos) and (p2 != string::npos))
        {
            f[p1][p2]++;
        }
    }
    kmax = sum = 0;
    for (k=0;k<_2pow19;k++)
    {
        t = 0;
        for (i=0;i<19;i++)
            for (j = 0;j<19;j++)
            {
                if (((k>>i)&1) != ((k>>j)&1))
                    t+=f[i][j];
            }
        if (t>sum)
        sum = t,kmax = k;
    }
    /*for (int i = 0;i<s.size();i++)
    {
        int p = cons.find(s[i]);
        if (((kmax>>p)&1)==1) s[i] = char(s[i]-'a'+'A');
    }*/
    int mask[19],p;
    for (i =0;i<19;i++)
        mask[i] = (kmax >>i)&1;
    for (int i =0;i<s.size();i++)
    {
        p = cons.find(s[i]);
        if (p!=string::npos)
            s[i] = O[mask[p]][p];
    }

        cout<<s;
    return 0;
}
