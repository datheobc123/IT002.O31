#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct PhanSo
{
    int tu, mau;
};

// Hàm kiểm tra và chuẩn hóa phân số, đưa dấu trừ về tử số
PhanSo Kiem_Tra_Phan_So_Am(int a, int b)
{
    PhanSo phanSo;

    if (b < 0)
    {
        b = abs(b);
        a = -a;
    }
    phanSo.tu = a;
    phanSo.mau = b;
    return phanSo;
}

// Hàm rút gọn phân số và in ra kết quả
void rut_gon(int tu, int mau)
{
    if (mau == 0)
    {
        cout << "Invalid" << endl;
        return;
    }

    int UCLN = __gcd(abs(tu), abs(mau));
    tu /= UCLN;
    mau /= UCLN;

    if (mau == 1)
    {
        cout << tu << endl;
    }
    else if (tu == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        // Đảm bảo không có dấu trừ không cần thiết
        if (mau < 0)
        {
            mau = -mau;
            tu = -tu;
        }
        cout << tu << '/' << mau << endl;
    }
}

// Hàm tính tổng của hai phân số
void Tong_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << "Tong 2 phan so la: ";
    int a = P1.tu * P2.mau + P2.tu * P1.mau;
    int b = P1.mau * P2.mau;
    rut_gon(a, b);
}

// Hàm tính hiệu của hai phân số
void Hieu_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << "Hieu 2 phan so la: ";
    int a = P1.tu * P2.mau - P2.tu * P1.mau;
    int b = P1.mau * P2.mau;
    rut_gon(a, b);
}

// Hàm tính tích của hai phân số
void Tich_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << "Tich 2 Phan So la: ";
    int a = P1.tu * P2.tu;
    int b = P1.mau * P2.mau;
    rut_gon(a, b);
}

// Hàm tính thương của hai phân số
void Thuong_2_Phan_So(PhanSo P1, PhanSo P2)
{
    cout << "Thuong 2 Phan So la: ";
    int a = P1.tu * P2.mau;
    int b = P1.mau * P2.tu;
    rut_gon(a, b);
}

int main()
{
    PhanSo P1, P2;
    cout << "Nhap phan so thu 1 (tu mau): ";
    cin >> P1.tu >> P1.mau;
    cout << "Phan So Thu 1: " << P1.tu << '/' << P1.mau << endl;
    cout << "Nhap phan so thu 2 (tu mau): ";
    cin >> P2.tu >> P2.mau;
    cout << "Phan So Thu 2: " << P2.tu << '/' << P2.mau << endl;

    if (P1.mau == 0 || P2.mau == 0)
    {
        cout << "Invalid" << endl;
        return 1;
    }

    P1 = Kiem_Tra_Phan_So_Am(P1.tu, P1.mau);
    P2 = Kiem_Tra_Phan_So_Am(P2.tu, P2.mau);
    
    Tong_2_Phan_So(P1, P2);
    Hieu_2_Phan_So(P1, P2);
    Tich_2_Phan_So(P1, P2);
    Thuong_2_Phan_So(P1, P2);
    
    return 0;
}
