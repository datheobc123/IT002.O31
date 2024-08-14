#include "TamGiac.hpp"
#include <iostream>
#include <cmath>
using namespace std;

TamGiac::TamGiac() {}

TamGiac::~TamGiac() {}

void TamGiac::Nhap()
{
    int a, b;
    cout << "Nhap lan luot toa do dinh A,B,C: " << endl;
    
    cin >> a >> b;
    DinhA.SetHoanhDo(a);
    DinhA.SetTungDo(b);

    cin >> a >> b;
    DinhB.SetHoanhDo(a);
    DinhB.SetTungDo(b);

    cin >> a >> b;
    DinhC.SetHoanhDo(a);
    DinhC.SetTungDo(b);

    double area = 0.5 * abs(
        DinhA.GetHoanhDo() * (DinhB.GetTungDo() - DinhC.GetTungDo()) +
        DinhB.GetHoanhDo() * (DinhC.GetTungDo() - DinhA.GetTungDo()) +
        DinhC.GetHoanhDo() * (DinhA.GetTungDo() - DinhB.GetTungDo())
    );
    if (area != 0)
    {
        cout << "3 diem vua nhap la 3 dinh cua 1 tam giac " << endl;
    }
    else
    {
        cout << "3 Diem vua nhap khong phai la 3 dinh cua 1 tam giac" << endl;
    }
}

void TamGiac::TinhTien(int a, int b)
{
    DinhA.TinhTien(a, b);
    DinhB.TinhTien(a, b);
    DinhC.TinhTien(a, b);
}

void TamGiac::PhongTo()
{
    cout << "Ban muon phong to bao nhieu?" << endl;
    int k;
    cin >> k;
    if (k <= 0) {
        cout << "He so phong to phai lon hon 0." << endl;
        return;
    }

    DinhA.SetHoanhDo(DinhA.GetHoanhDo() * k);
    DinhA.SetTungDo(DinhA.GetTungDo() * k);
    
    DinhB.SetHoanhDo(DinhB.GetHoanhDo() * k);
    DinhB.SetTungDo(DinhB.GetTungDo() * k);

    DinhC.SetHoanhDo(DinhC.GetHoanhDo() * k);
    DinhC.SetTungDo(DinhC.GetTungDo() * k);
}

void TamGiac::ThuNho()
{
    cout << "Ban muon thu nho bao nhieu?" << endl;
    int k;
    cin >> k;
    if (k <= 0) {
        cout << "He so thu nho phai lon hon 0." << endl;
        return;
    }

    DinhA.SetHoanhDo(DinhA.GetHoanhDo() / k);
    DinhA.SetTungDo(DinhA.GetTungDo() / k);

    DinhB.SetHoanhDo(DinhB.GetHoanhDo() / k);
    DinhB.SetTungDo(DinhB.GetTungDo() / k);

    DinhC.SetHoanhDo(DinhC.GetHoanhDo() / k);
    DinhC.SetTungDo(DinhC.GetTungDo() / k);
}

void TamGiac::Quay()
{
    float goc;
    cout << "Ban muon quay goc bao nhieu do?" << endl;
    cin >> goc;

    DinhA.Quay(goc);
    DinhB.Quay(goc);
    DinhC.Quay(goc);
}

void TamGiac::Xuat()
{
    DinhA.Xuat();
    DinhB.Xuat();
    DinhC.Xuat();
}
