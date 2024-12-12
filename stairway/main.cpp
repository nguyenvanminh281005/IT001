#include <bits/stdc++.h>

using namespace std;
int calc(long long n)
{
    int count1=0;
     while(n!=0)
    {
        count1++;
        n/=10;
    }
    return count1;
}

int main()
{
    long long n;
    cin>>n;
    long long ans =1+calc(n);
    if (n==1)
    {
        cout<<1;
        return 0;
    }
    long long r=0,l=1;
    for (int i =1;i<=12;i++)
    {
        r=r*10+9;
        cout << l << ' ' << r << ' ' << n << '\n';
        if (r>n) break;
        long long taken = min(r,(n-1)/10) - l+1;
        ans +=taken*(i+1);
        l=l*10;
    }
    cout<<ans;
    return 0;
}
