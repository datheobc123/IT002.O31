#include "PhanSo.hpp"
#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;
PhanSo::PhanSo() 
{
    this->Tu = 0;
    this->Mau = 0;
}  

void PhanSo::RutGon() 
{
    int a = __gcd(Tu, Mau);
    Tu /= a;
    Mau /= a;
    if (Mau < 0) 
    {
        Tu = -Tu;
        Mau = -Mau;
    }
}


PhanSo::PhanSo(int Tu, int Mau)
{
    Tu = Tu;
    Mau = Mau;
    if (Mau == 0) 
    {
        cout << "Mau So khong the bang 0 !!!";
        exit(1);
    }
    RutGon();
}

PhanSo::~PhanSo() {}

istream& operator>>(istream& is, PhanSo& P) 
{
    cout << "Nhap Tu So va Mau So: ";
    is >> P.Tu >> P.Mau;
    if (P.Mau == 0)
    {
        cout << "Mau So Khong The Bang 0 !!!";
        exit(1);
    }
    P.RutGon();
    return is;
}

ostream& operator<<(ostream& os, PhanSo& P) 
{
    os << P.Tu << '/' << P.Mau;
    return os;
}



PhanSo PhanSo::operator-(PhanSo& b) 
{
    PhanSo kq;
    kq.Tu = Tu * b.Mau - Mau * b.Tu;
    kq.Mau = Mau * b.Mau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::operator*(PhanSo& b) 
{
    PhanSo kq;
    kq.Tu = Tu * b.Tu;
    kq.Mau = Mau * b.Mau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::operator/( PhanSo& b) 
{
    if (b.Tu == 0) 
    {
        cout << "Mau So Khong The Bang 0 !!!" << endl;
        exit(1);
    }
    PhanSo kq;
    kq.Tu = Tu * b.Mau;
    kq.Mau = Mau * b.Tu;
    kq.RutGon();
    return kq;
}

bool PhanSo::operator==(PhanSo& b) 
{
    return Tu == b.Tu && Mau == b.Mau;
}

bool PhanSo::operator!=(PhanSo& b) 
{
    return !(*this == b);
}

bool PhanSo::operator>=(PhanSo& b) 
{
    return !(*this < b);
}

bool PhanSo::operator<=(PhanSo& b) 
{
    return !(*this > b);
}

bool PhanSo::operator>(PhanSo& b) 
{
    return Tu * b.Mau > Mau * b.Tu;
}

bool PhanSo::operator<( PhanSo& b) 
{
    return Tu * b.Mau < Mau * b.Tu;
}
