#include "QuanLy.hpp"

QuanLy::QuanLy() 
{
	this->tyLeThuong = tyLeThuong;
}

QuanLy::~QuanLy() {}

void QuanLy::nhap() {
    NhanVien::nhap();
    cout << "Nhap vao ti le thuong: ";
    cin >> tyLeThuong;
    cin.ignore();
}

void QuanLy::xuat() {
    NhanVien::xuat();
    cout << "Ti Le Thuong: " << tyLeThuong << endl;
}

double QuanLy::TienThuong()
{
    return tyLeThuong * luongCoBan;
}
