#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    int x,y;
};
const int MAXN=1e5+10;
void Nhap(PhanSo b[],int n){
     cin>>n;
     PhanSo A[MAXN];
     for(int i=1; i<=n; i++){
        cin>>A[i].x>>A[i].y;
        int a=A[i].x;
        int b=A[i].y;
        if(b==0){
            cout<<"Khong thoa yeu cau bai toan";
        }
        else if(a==0){
            cout<<0;
        }
        else if(a%b==0){
            cout<<a/b;
        }
        else{
            int c=__gcd(a,b);
            a/=c;
            b/=c;
            if(b<0){
                b=-b;
                a=-a;
            }
            cout<<a<<"/"<<b;
        }
        cout<<'\n';
    }
}
void Xuat(PhanSo A[],int &n)
{

}
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

