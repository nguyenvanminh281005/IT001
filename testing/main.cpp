#include <iostream>

using namespace std;


int main()
{
    string s;
    getline(cin,s);
    int count1 = 1;
    for (int i = 1;i<s.size();i++)
    {
        if (s[i] != s[i-1]) count1++;

    }
    cout<<count1;
    return 0;
}
