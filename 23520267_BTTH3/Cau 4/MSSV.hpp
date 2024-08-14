#pragma once

#include <string>
using namespace std;
class MSSV {
private:
    string hoVaTen;
    char maSo[100];
    int iNgay, iThang, iNam;
    double fToan, fVan, fAnh;
public:
    MSSV();
    void Nhap();
    void Xuat();
    bool Tong();
    ~MSSV();
};
