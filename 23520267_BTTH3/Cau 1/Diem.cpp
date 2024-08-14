#include "Diem.hpp"
#include <iostream>
using namespace std;

Diem::Diem() {}

Diem::Diem(int Hoanh, int Tung)
{
    iHoanh = Hoanh;
    iTung = Tung;
}

Diem::Diem(const Diem &x) 
{
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

Diem::~Diem() {}

void Diem::Xuat()
{
    cout << "Hoanh Do va Tung Do la: (" << iHoanh << ", " << iTung << ")" << endl;
}


int Diem::GetTungDo()
{
    return iTung;
}


int Diem::GetHoanhDo()
{
    return iHoanh;
}


void Diem::SetTungDo(int Tung)
{
    iTung = Tung;
}


void Diem::SetHoanhDo(int Hoanh)
{
    iHoanh = Hoanh;
}


void Diem::TinhTien(int a, int b)
{
    iHoanh = iHoanh + a;
    iTung = iTung + b;
}
