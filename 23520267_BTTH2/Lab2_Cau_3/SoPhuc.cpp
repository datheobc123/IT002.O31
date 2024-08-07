#include "SoPhuc.hpp"
#include <iostream>
using namespace std;
SoPhuc::SoPhuc() {}

void SoPhuc::Nhap() {
    cin >> this->phanThuc >> this->phanAo;
}

void SoPhuc::Xuat() {
    cout << phanThuc;
    if (phanAo >= 0)
        cout << "+" << phanAo << "i" << endl;
    else
        cout << "-" << -phanAo << "i" << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc &sp) {
    SoPhuc result;
    result.phanThuc = this->phanThuc + sp.phanThuc;
    result.phanAo = this->phanAo + sp.phanAo;
    return result;
}

SoPhuc SoPhuc::Hieu(SoPhuc &sp) {
    SoPhuc result;
    result.phanThuc = this->phanThuc - sp.phanThuc;
    result.phanAo = this->phanAo - sp.phanAo;
    return result;
}

SoPhuc SoPhuc::Tich(SoPhuc &sp) {
    SoPhuc result;
    result.phanThuc = (this->phanThuc * sp.phanThuc) - (this->phanAo * sp.phanAo);
    result.phanAo = (this->phanThuc * sp.phanAo) + (this->phanAo * sp.phanThuc);
    return result;
}

SoPhuc SoPhuc::Thuong(SoPhuc &sp) {
    SoPhuc result;
    double MauSo = sp.phanThuc * sp.phanThuc + sp.phanAo * sp.phanAo;

    if (MauSo == 0) {
        cout << "Invalid" << endl;
        exit(1);
    }

    result.phanThuc = (this->phanThuc * sp.phanThuc + this->phanAo * sp.phanAo) / MauSo;
    result.phanAo = (this->phanAo * sp.phanThuc - this->phanThuc * sp.phanAo) / MauSo;

    return result;
}

SoPhuc::~SoPhuc() {}