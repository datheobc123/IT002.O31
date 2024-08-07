#pragma once

class SoPhuc {
private:
    int phanThuc, phanAo;
public:
    SoPhuc();
    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc &a);
    SoPhuc Hieu(SoPhuc &a);
    SoPhuc Tich(SoPhuc &a);
    SoPhuc Thuong(SoPhuc &a);
    ~SoPhuc();
};
