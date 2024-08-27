#pragma once
#include "NhanVien.hpp"

class QuanLy : public NhanVien {
private:
    double tyLeThuong;
public:
    QuanLy();
    void nhap();
    void xuat();
    double TienThuong() override;
    ~QuanLy();
};
