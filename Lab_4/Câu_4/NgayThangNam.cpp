#include "NgayThangNam.hpp"
#include <iostream>

using namespace std;
NgayThangNam::NgayThangNam()
{
    this->iNam = 1;
    this->iThang = 1;
    this->iNgay = 1;
}

NgayThangNam::NgayThangNam(int nam, int thang, int ngay)
{
    this->iNgay = ngay;
    this->iThang = thang;
    this->iNam = nam;
    if (!KiemTraNgayHopLe(iNgay, iThang, iNam)) 
    {
        cout << "Invalid" << endl;
        exit(2);
    }
}

bool NgayThangNam::KiemTraNgayHopLe(int ngay, int thang, int nam)
{
    if (thang < 1 or thang > 12 or ngay < 1) 
        return false;
    switch (thang) 
    {
        case 4: case 6: case 9: case 11:
            return ngay <= 30;
        case 2:
            return (nam % 4 == 0 && (nam % 100 != 0 or nam % 400 == 0)) ? ngay <= 29 : ngay <= 28;
        default:
            return ngay <= 31;
    }
}

void NgayThangNam::TinhNgay() 
{
    while (!KiemTraNgayHopLe(iNgay, iThang, iNam)) 
    {
        if (iNgay > 31) 
        {
            iNgay -= 31;
            iThang++;
        }
        if (iThang > 12) 
        {
            iThang = 1;
            iNam++;
        }
    }
}

NgayThangNam NgayThangNam::operator+(int ngay)  
{
    NgayThangNam kq = *this;
    kq.iNgay += ngay;
    kq.TinhNgay();
    return kq;
}

NgayThangNam NgayThangNam::operator-(int ngay)  
{
    NgayThangNam kq = *this;
    kq.iNgay -= ngay;
    while (kq.iNgay <= 0) 
    {
        kq.iThang--;
        if (kq.iThang <= 0) 
        {
            kq.iThang = 12;
            kq.iNam--;
        }
        kq.iNgay += 31;
    }
    kq.TinhNgay();
    return kq;
}

long NgayThangNam::operator-( NgayThangNam& a)  
{
    long ngay1 = iNgay + iThang * 30 + iNam * 365;
    long ngay2 = a.iNgay + a.iThang * 30 + a.iNam * 365;
    return ngay1 - ngay2;
}

NgayThangNam& NgayThangNam::operator++() 
{
    *this = *this + 1;
    return *this;
}

NgayThangNam NgayThangNam::operator++(int) 
{
    NgayThangNam tmp = *this;
    ++(*this);
    return tmp;
}

NgayThangNam& NgayThangNam::operator--() 
{
    *this = *this - 1;
    return *this;
}

NgayThangNam NgayThangNam::operator--(int) 
{
    NgayThangNam tmp = *this;
    --(*this);
    return tmp;
}

bool NgayThangNam::operator==(NgayThangNam& a) 
{
    return iNgay == a.iNgay && iThang == a.iThang && iNam == a.iNam;
}

bool NgayThangNam::operator!=(NgayThangNam& a) 
{
    return !(*this == a);
}

bool NgayThangNam::operator>=(NgayThangNam& a) 
{
    return (*this > a) or (*this == a);
}

bool NgayThangNam::operator<=(NgayThangNam& a) 
{
    return (*this < a) or (*this == a);
}

bool NgayThangNam::operator>(NgayThangNam& a) 
{
    if (iNam > a.iNam)
        return true;
    if (iNam < a.iNam)
        return false;
    if (iThang > a.iThang)
        return true;
    if (iThang < a.iThang)
        return false;
    return iNgay > a.iNgay;
}

bool NgayThangNam::operator<(NgayThangNam& a) 
{
    if (iNam < a.iNam)
        return true;
    if (iNam > a.iNam)
        return false;
    if (iThang < a.iThang)
        return true;
    if (iThang > a.iThang)
        return false;
    return iNgay < a.iNgay;
}

istream& operator>>(istream& in, NgayThangNam& a)
{
    cout << "Nhap nam: ";
    in >> a.iNam;
    cout << "Nhap thang: ";
    in >> a.iThang;
    cout << "Nhap ngay: ";
    in >> a.iNgay;
    if (!a.KiemTraNgayHopLe(a.iNgay, a.iThang, a.iNam)) 
    {
        cout << "Invalid" << endl;
        exit(2);
    }
    return in;
}

ostream& operator<<(ostream& out,  NgayThangNam& a) 
{
    out << a.iNgay << "/" << a.iThang << "/" << a.iNam;
    return out;
}
