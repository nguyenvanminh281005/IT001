#include <bits/stdc++.h>

using namespace std;

vector<pair<int,double>> A,B;
int n,m;

int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}

cin>>n;
A.resize(n);
for (auto&f:A)
    cin>>f.second>>f.first;
cin>>m;
sort(A.begin(),A.end());
B.resize(n);
for (auto&f:B)
    cin>>f.second>>f.first;
cin>>m;
sort(B.begin(),B.end());
