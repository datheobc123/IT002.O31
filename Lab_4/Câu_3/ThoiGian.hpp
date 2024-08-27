#pragma once
#include <iostream>
using namespace std;
class ThoiGian 
{
    unsigned int Gio, Phut, Giay;
public:
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);
    int TinhGiay();
    void TinhLaiGio(int Giay);

    friend istream& operator>>(istream& is, ThoiGian& a);
    friend ostream& operator<<(ostream& os, ThoiGian& a);

    ThoiGian operator+(int Giay) ;
    ThoiGian operator-(int Giay) ;
    ThoiGian operator+(ThoiGian& a) ;
    ThoiGian operator-(ThoiGian& a) ;


    ThoiGian& operator++();  // ++a
    ThoiGian operator++(int); // a++
    ThoiGian& operator--();  // --a
    ThoiGian operator--(int); // a--


    bool operator==(ThoiGian& b) ;
    bool operator!=(ThoiGian& b) ;
    bool operator>=(ThoiGian& b) ;
    bool operator<=(ThoiGian& b) ;
    bool operator>(ThoiGian& b) ;
    bool operator<(ThoiGian& b) ;

    ~ThoiGian();
};
