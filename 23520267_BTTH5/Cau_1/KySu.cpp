#include "KySu.hpp"

KySu::KySu()
{
	this->soGioLamThem = soGioLamThem;
}

KySu::~KySu() {}

void KySu::nhap() 
{
    NhanVien::nhap();
    cout << "Nhap vao so gio lam them: ";
    cin >> soGioLamThem;
    cin.ignore(); 
}

void KySu::xuat() 
{
    NhanVien::xuat();
    cout << "So Gio Lam Them: " << soGioLamThem << endl;
}

double KySu::TienThuong()
 {
    return soGioLamThem * 100000;
}
