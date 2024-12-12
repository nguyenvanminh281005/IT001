#include<bits/stdc++.h>
using namespace std;


int B[20],a,C[20][20],d,D[20];
string n;
vector<char> ans;
char A[20][20];
void check(){
    d=0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(A[i][j]=='X'){
                d++;
                C[i][j]=D[d];
            }
            else C[i][j]=A[i][j]-'0';
        }
    }
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            B[j]=0;
        }
        for(int j=1; j<=9; j++){
            B[C[i][j]]++;
            if(B[C[i][j]]>1) return;
        }
    }
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            B[j]=0;
        }
        for(int j=1; j<=9; j++){
            B[C[j][i]]++;
            if(B[C[j][i]]>1) return;
        }
    }
    for(int x=1; x<=9; x+=3){
        for(int y=1; y<=9; y+=3){
            for(int i=1; i<=9; i++) B[i]=0;
            for(int i=x; i<=x+3-1; i++){
                for(int j=y; j<=y+3-1; j++){
                    B[C[i][j]]++;
                    if(B[C[i][j]]>1) return;
                }
            }
        }
    }
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cout<<C[i][j]<<' ';
        }
        cout<<'\n';
    }
    exit(0);
}
void ql(int a){
    for(int i=1; i<=9; i++){
        D[a]=i;
        if(a<5) ql(a+1);
        else check();
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cin>>A[i][j];
        }
    }
    ql(1);
    return 0;
}
