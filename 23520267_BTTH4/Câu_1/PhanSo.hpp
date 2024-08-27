#pragma once
#include <iostream>
using namespace std;
class PhanSo 
{
private:
    int Tu, Mau;
    void RutGon();
public:
    PhanSo();
    PhanSo(int Tu, int Mau);
    ~PhanSo();

    PhanSo operator+( PhanSo& b);
    PhanSo operator-( PhanSo& b);
    PhanSo operator*( PhanSo& b);
    PhanSo operator/( PhanSo& b);

    bool operator==( PhanSo& b);
    bool operator!=( PhanSo& b);
    bool operator>=( PhanSo& b);
    bool operator<=( PhanSo& b);
    bool operator>( PhanSo& b);
    bool operator<( PhanSo& b);

    friend istream& operator>>(istream& is, PhanSo& a);
    friend ostream& operator<<(ostream& os, PhanSo& a);
};
