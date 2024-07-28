#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct PhanSo
{
    int tu, mau;
};

PhanSo Kiem_Tra_Phan_So_Am(int a, int b)
{
    PhanSo phanSo;

    if (a > 0 and b < 0)
    {
        b = abs(b);
        a = -a;
    }
    phanSo.tu = a;
    phanSo.mau = b;
    return phanSo;
}

void rut_gon(int &tu, int &mau)
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

void Tong_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << "Tong 2 phan so la: ";
    if (P1.mau == P2.mau)
    {
        //Tổng của tử, mẫu giữ nguyên
        int a = P1.tu + P2.tu;
        int b = P1.mau;
        rut_gon(a,b);
    }
    if (P1.mau != P2.mau)
    {
        int a = (P1.tu * P2.mau) + (P1.mau * P2.tu);
        int b = (P1.mau * P2.mau);
        rut_gon(a,b);
    }
}

void Hieu_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << endl;
    cout << "Hieu 2 phan so la: ";
    if (P1.mau == P2.mau)
    {
        //Hiệu của tử, mẫu giữ nguyên
        int a = P1.tu - P2.tu;
        int b = P1.mau;
        rut_gon(a,b);
    }
    if (P1.mau != P2.mau)
    {
        int a = (P1.tu * P2.mau) - (P1.mau * P2.tu);
        int b = (P1.mau * P2.mau);
        rut_gon(a,b);
    }
}

void Tich_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << endl << "Tich 2 Phan So la: ";
    int a = P1.tu * P2.tu;
    int b = P1.mau * P2.mau;
    rut_gon(a,b);
}

void Thuong_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << endl << "Thuong 2 Phan So la: ";
    int a = P1.tu * P2.mau;
    int b = P1.mau * P2.tu;
    rut_gon(a,b);
}



int main(int argc, char const *argv[])
{
    PhanSo P1, P2;
    cin >> P1.tu >> P1.mau;
    cout << "Phan So Thu 1: " << P1.tu << '/' << P1.mau << endl;
    cin >> P2.tu >> P2.mau;
    cout << "Phan So Thu 2: " << P2.tu << '/' << P2.mau << endl;

    if (P1.mau == 0 || P2.mau == 0)
    {
        cout << "Invalid" << endl;
        return 2;
    }
    P1 = Kiem_Tra_Phan_So_Am(P1.tu, P1.mau);
    P2 = Kiem_Tra_Phan_So_Am(P2.tu, P2.mau);
    Tong_2_Phan_So(P1,P2);
    Hieu_2_Phan_So(P1,P2);
    Tich_2_Phan_So(P1,P2);
    Thuong_2_Phan_So(P1,P2);
    
    return 0;
}
