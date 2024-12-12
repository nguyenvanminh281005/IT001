#include<bits/stdc++.h>
using namespace std;
#define lll pair<pair<int,int>,int>

string t,ans;
char s[300][300];
int n,m,ma,u,v;
stack<lll> ds;
bool C[300][300],OK;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
void check(int x,int y,int d){
    char l=s[x][y];
    s[x][y]='5';
    if(d==ans.size() || OK) {OK=true; return;}
    for(int i=0; i<4; i++){
        u=x+dx[i];
        v=y+dy[i];
        if(u>0 && v>0 && u<=n && v<=m && ans[d]==s[u][v]){
            check(u,v,d+1);
        }
    }
    s[x][y]=l;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    getline(cin,t);
    n=1;
    for(char v: t){
        if (('a'<=v && v<='z') || ('A'<=v && v<='Z')){
            m++;
            ma=max(ma,m);
            s[n][m]=v;
        }
        if(v==']'){
            m=0;
            n++;
        }
    }
    cin>>ans;
    n-=2;
    m=ma;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s[i][j]==ans[0]){
                check(i,j,1);
                if(OK){
                    cout<<"true";
                    return 0;
                }
            }
        }
    }
    cout<<"false";
    return 0;
}
