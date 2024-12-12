#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int sum = n*(n+1)/2;
    if (n*(n+1)/2<k)
    {
        cout<< "NO_SOLUTION";
    }
    else if (sum%2 != k%2) cout <<"NO_SOLUTION";
    else
    {
        char res[n];
        memset(res,'+',sizeof(res));
        int sol = sum - k;
            while(sol-2*n>0)
            {
                res[n-1] = '-';
                sol-=2*n;
                n--;
            }
        res[sol/2-1] = '-';
        for (auto r:res) cout<<r;
    }
    return 0;
}
