#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct PhanSo
{
    int tu,mau;
}PS;

void rut_gon(int tu, int mau)
{
    int UCLN = __gcd(tu,mau);
    cout << tu/UCLN << '/' << mau/UCLN << endl;    
}

int main(int argc, char const *argv[])
{
    PhanSo P;
    cin >> P.tu >> P.mau;
    cout << "Phan So Vua Nhap: " << P.tu << '/' << P.mau << endl;
    cout << "Phan So Sau Khi Rut Gon: ";
    rut_gon(P.tu, P.mau);
    return 0;
}