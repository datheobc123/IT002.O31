#pragma once
#include <string>
#include <iostream>
using namespace std;

class NhanVien {
protected:
    string maSo;
    string ten;
    double luongCoBan;
public:
    NhanVien();
    void nhap();
    void xuat();
    virtual double TienThuong() = 0; 
    virtual ~NhanVien();
};
