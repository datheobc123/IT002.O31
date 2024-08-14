#pragma once
#include "Diem.hpp"
class TamGiac {
private:
    Diem DinhA, DinhB, DinhC;
public:
    TamGiac();
    void Nhap();
    void Xuat();
    void TinhTien(int a, int b);
    void PhongTo();
    void ThuNho();
    void Quay();
    ~TamGiac();
};
