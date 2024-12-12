#include <bits/stdc++.h>

using namespace std;

struct PhanSo
{
  int x,y;
};

double Nhap(PhanSo a)
{
    cin>>a.x>>a.y;
    return (double) a.x/a.y;
}
int Nhap()
{
    PhanSo a;
    cin>>a.x>>a.y;
    return a;
}
int SoSanh (a,b)
{
    if (a.x*b.y == a.y*b.x) return 0;
    else if (a.x*b.y > a.y*b.x) return 2;
    else return -1;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
