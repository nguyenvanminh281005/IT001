#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
    int tu;
    int mau;
    PhanSo (int a = 0, int b = 0)
    {
        tu = a, mau = b;
    }
};
void Nhap(PhanSo& a)
{
    cin >> a.tu >> a.mau;
}

PhanSo Nhap () {
    int x, y;
    cin >> x >> y;
    return PhanSo(x, y);
}

PhanSo Cong(PhanSo a,PhanSo b)
{
    int tu = a.tu * b.mau + a.mau * b.tu;
    int mau = a.mau * b.mau;

    int g = __gcd(tu, mau);
    tu /= g; mau /= g;

    if (mau < 0) {
        tu = -tu, mau = -mau;
    }

    return PhanSo(tu, mau);
}

void Xuat(PhanSo a)
{
    cout << a.tu;
    if (a.mau != 1) cout << "/" << a.mau;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}

