#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
    {
        char s[MAX];
        cin.getline(s,MAX);
        if (myStrcmp(s, "") == 0)
            cout << "Chuoi rong." << endl;
        else
        {
            StringReverse(s);
            cout << s << endl;
        }
        return 0;
    }

void StringReverse (char st[])
    {
        char x[MAX];
        for (int i = 0;i<MAX;i++)
        {
            if ( ('a' <= st[i]and 'z'>=st[i]) or ('A' <= st[i] and 'Z'>=st[i]) or st[i] == ' ')
            {
                x[i] = st[i];
            }
            else break;
        }
        for (auto r:x) cout <<r;
    }

int myStrcmp(char s1[], char s2[])
    {
        if (s1 == s2) return 0;
        else return 1;
    }
