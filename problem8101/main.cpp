
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	//gets(s);	//Nhap chuoi s
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

void DemKyTu(char s[])
    {
        int len = myStrlen(s,0);
        int check[256] = {0};
        bool c[256] = {0};
        int cnt = 0;
        for (int i = 0;i<len;i++)
        {
            check[s[i]]++;
        }
        for (int i = 0;i<len;i++)
        {
            if (c[s[i]]||s[i]=='\0') continue;
            cout<<s[i]<<": "<<check[s[i]]<<'\n';
            c[s[i]] = true;
        }
    }
    int myStrcmp (char s1[MAX],char s2[MAX])
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
        return len;
    }
