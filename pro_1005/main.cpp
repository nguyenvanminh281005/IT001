#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

int szMASV[100003],szHoTen[100005],szNgaySinh[100005];
void Nhap(SinhVien A[],int &n){
    cin>>n;
    string s;
    for(int test=1; test<=n; test++){
    getline(cin,s);
        getline(cin,s);
        for(int i=0; i<s.size(); i++){
              A[test].MASV[i]=s[i];
        }
         szMASV[test]=s.size();
        getline(cin,s);
        for(int i=0; i<s.size(); i++){
              A[test].HoTen[i]=s[i];
        }
         szHoTen[test]=s.size();
        getline(cin,s);
        for(int i=0; i<s.size(); i++){
              A[test].NgaySinh[i]=s[i];
        }
         szNgaySinh[test]=s.size();
        cin>>A[test].GioiTinh;
        cin>>A[test].DiemToan>>A[test].DiemLy>>A[test].DiemHoa;
    }
}
bool cmp(SinhVien a,SinhVien b){
    for(int i=0; i<8; i++){
        if(a.MASV[i]>b.MASV[i]) return true;
        else if(a.MASV[i]<b.MASV[i]) return false;
    }
}
void SapXepGiamTheoMASV(SinhVien A[],int &n){
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(!cmp(A[i],A[j])) {
                    swap(A[i],A[j]);
            swap(szMASV[i],szMASV[j]);
            swap(szHoTen[i],szHoTen[j]);
            swap(szNgaySinh[i],szNgaySinh[j]);
            }
        }
    }
}
void Xuat(SinhVien A[],int &n){
    for(int test=1; test<=n; test++){
    for(int i=0; i<szMASV[test]; i++){
        cout<<A[test].MASV[i];
    }
    cout<<"    ";
    for(int i=0; i<szHoTen[test]; i++){
        cout<<A[test].HoTen[i];
    }
    cout<<"    ";
    for(int i=0; i<szNgaySinh[test]; i++){
        cout<<A[test].NgaySinh[i];
    }
    cout<<"    ";
    cout<<A[test].GioiTinh;
    cout<<"    ";
    cout<<A[test].DiemToan;
    cout<<"    ";
    cout<<A[test].DiemLy;
    cout<<"    ";
    cout<<A[test].DiemHoa;
    cout<<"    ";
    cout<<setprecision(3)<<(A[test].DiemHoa+A[test].DiemLy+A[test].DiemToan)/3.0<<'\n';

    }
}
int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
