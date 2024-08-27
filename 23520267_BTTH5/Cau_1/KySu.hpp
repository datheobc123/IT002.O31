#pragma once
#include "NhanVien.hpp"

class KySu : public NhanVien {
private:
    double soGioLamThem;
public:
    KySu();
    void nhap();
    void xuat();
    double TienThuong() override;
    ~KySu();
};
