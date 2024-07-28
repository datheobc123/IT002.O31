#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct PhanSo
{
    int tu, mau;
};

PhanSo Phan_So_Lon_Nhat(PhanSo P1, PhanSo P2)
{
        double a = static_cast<double>(P1.tu) / P1.mau;
        double b = static_cast<double>(P2.tu) / P2.mau;
    
        PhanSo kq = (a > b) ? P1 : P2;
        return kq;
}

void rut_gon(int tu, int mau)
{
    int UCLN = __gcd(tu,mau);
    int a = tu/UCLN; int b = mau/UCLN;
    if (b == 1)
    {
        cout << tu/UCLN << endl;
        return;
    }
    else
        cout << tu/UCLN << '/' << mau/UCLN << endl;    
}

int main(int argc, char const *argv[])
{
    PhanSo P1, P2;
    cin >> P1.tu >> P1.mau;
    cout << "Phan So Thu 1: " << P1.tu << '/' << P1.mau << endl;
    cin >> P2.tu >> P2.mau;
    cout << "Phan So Thu 2: " << P2.tu << '/' << P2.mau << endl;
	//Kiểm Tra Mẫu Số của 2 phân số vừa nhập
    if (P1.mau == 0 || P2.mau == 0)
    {
        cout << "Invalid" << endl;
        return 2;
    }

    PhanSo result = Phan_So_Lon_Nhat(P1, P2);
    cout << "Phan So Lon Nhat: " << result.tu << '/' << result.mau << endl;
    cout << "Phan So Lon Nhat Sau Khi Rut Gon: ";
    rut_gon(result.tu, result.mau);
    return 0;
}
