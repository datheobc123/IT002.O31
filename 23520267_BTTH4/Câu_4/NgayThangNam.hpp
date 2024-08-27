#pragma once
#include <iostream>
using namespace std;

class NgayThangNam 
{
private:
    int iNgay, iThang, iNam;
    bool KiemTraNgayHopLe(int ngay, int thang, int nam);
    void TinhNgay();

public:
    NgayThangNam();
    NgayThangNam(int nam, int thang, int ngay = 1);

    NgayThangNam operator+(int ngay) ;
    NgayThangNam operator-(int ngay) ;
    long operator-( NgayThangNam& a) ;

    NgayThangNam& operator++();
    NgayThangNam operator++(int);
    NgayThangNam& operator--();
    NgayThangNam operator--(int);

    bool operator==( NgayThangNam& a) ;
    bool operator!=( NgayThangNam& a) ;
    bool operator>=( NgayThangNam& a) ;
    bool operator<=( NgayThangNam& a) ;
    bool operator>( NgayThangNam& a) ;
    bool operator<( NgayThangNam& a) ;

    friend istream& operator>>(istream& in, NgayThangNam& a);
    friend ostream& operator<<(ostream& out,  NgayThangNam& a);
};
