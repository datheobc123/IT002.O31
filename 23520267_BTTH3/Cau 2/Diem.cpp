#include "Diem.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Diem::Diem() : iHoanh(0), iTung(0) {}

Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

Diem::~Diem() {}

void Diem::Xuat()
{
    cout << "Hoanh Do va Tung Do la: (" << iHoanh << ", " << iTung << ")" << endl;
}

int Diem::GetTungDo() { return iTung; }

int Diem::GetHoanhDo() { return iHoanh; }

void Diem::SetTungDo(int Tung) { iTung = Tung; }

void Diem::SetHoanhDo(int Hoanh) { iHoanh = Hoanh; }

void Diem::TinhTien(int a, int b)
{
    iHoanh += a;
    iTung += b;
}

void Diem::Quay(double goc)
{
    double rad = goc * M_PI / 180.0;
    int tmp_x = iHoanh;
    int tmp_y = iTung;

    iHoanh = round(tmp_x * cos(rad) - tmp_y * sin(rad));
    iTung = round(tmp_x * sin(rad) + tmp_y * cos(rad));
}
