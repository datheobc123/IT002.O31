#include "ThoiGian.hpp"
#include <iostream>
using namespace std;
ThoiGian::ThoiGian()
{
	this->Gio = 0;
	this->Phut = 0;
	this->Giay = 0;
}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay)
{
    int sec = TinhGiay();
    Gio = sec / 3600;
    sec %= 3600;
    Phut = sec / 60;
    Giay = sec % 60;
}


istream& operator>>(istream& is,ThoiGian& a) 
{
    cout << "Xin moi nguoi dung nhap vao lan luot: Gio Phut Giay !!!" << endl;
    is >> a.Gio >> a.Phut >> a.Giay;
    return is;
}

ostream& operator<<(ostream& os, ThoiGian& a) 
{
    os << a.Gio << 'h' << a.Phut << 'p' << a.Giay << 's' << endl;
    return os;
}

int ThoiGian::TinhGiay()
{
    return (3600 * Gio + 60 * Phut + Giay);
}

void ThoiGian::TinhLaiGio(int Giay)
{
    int sec = TinhGiay() + Giay;
    Gio = sec / 3600;
    sec %= 3600;
    Phut = sec / 60;
    Giay = sec % 60;
    cout << Gio << 'h' << Phut << 'p' << Giay << 's' << endl;
}

ThoiGian ThoiGian::operator+(int Giay)
{
    ThoiGian tmp = *this;
    int sec = tmp.TinhGiay() + Giay;
    tmp.Gio = sec / 3600;
    sec %= 3600;
    tmp.Phut = sec / 60;
    tmp.Giay = sec % 60;
    return tmp;
}

ThoiGian ThoiGian::operator-(int Giay)
{
    ThoiGian tmp = *this;
    int sec = tmp.TinhGiay() - Giay;
    if (sec < 0) sec = 0;
    tmp.Gio = sec / 3600;
    sec %= 3600;
    tmp.Phut = sec / 60;
    tmp.Giay = sec % 60;
    return tmp;
}

ThoiGian ThoiGian::operator+(ThoiGian& a)
{
    int sec = this->TinhGiay() + a.TinhGiay();
    ThoiGian tmp;
    tmp.Gio = sec / 3600;
    sec %= 3600;
    tmp.Phut = sec / 60;
    tmp.Giay = sec % 60;
    return tmp;
}

ThoiGian ThoiGian::operator-(ThoiGian& a)
{
    int sec = this->TinhGiay() - a.TinhGiay();
    if (sec < 0) sec = 0;
    ThoiGian tmp;
    tmp.Gio = sec / 3600;
    sec %= 3600;
    tmp.Phut = sec / 60;
    tmp.Giay = sec % 60;
    return tmp;
}

ThoiGian& ThoiGian::operator++()
{
    Giay++;
    if (Giay >= 60) 
    {
        Giay = 0;
        Phut++;
        if (Phut >= 60) 
        {
            Phut = 0;
            Gio++;
        }
    }
    return *this;
}

ThoiGian ThoiGian::operator++(int)
{
    ThoiGian tmp = *this;
    ++(*this);
    return tmp;
}

ThoiGian& ThoiGian::operator--() 
{
    if (Giay == 0) 
    {
        Giay = 59;
        if (Phut == 0) 
        {
            Phut = 59;
            if (Gio > 0) 
                Gio--;
        } 
        else 
        {
            Phut--;
        }
    } 
    else 
    {
        Giay--;
    }
    return *this;
}

ThoiGian ThoiGian::operator--(int) 
{
    ThoiGian tmp = *this;
    --(*this);
    return tmp;
}

bool ThoiGian::operator==(ThoiGian& b)  
{
    return this->TinhGiay() == b.TinhGiay();
}

bool ThoiGian::operator!=(ThoiGian& b)  
{
    return this->TinhGiay() != b.TinhGiay();
}

bool ThoiGian::operator>=(ThoiGian& b)  
{
    return this->TinhGiay() >= b.TinhGiay();
}

bool ThoiGian::operator<=(ThoiGian& b)  
{
    return this->TinhGiay() <= b.TinhGiay();
}

bool ThoiGian::operator>(ThoiGian& b)  
{
    return this->TinhGiay() > b.TinhGiay();
}

bool ThoiGian::operator<(ThoiGian& b)  
{
    return this->TinhGiay() < b.TinhGiay();
}

ThoiGian::~ThoiGian() {}