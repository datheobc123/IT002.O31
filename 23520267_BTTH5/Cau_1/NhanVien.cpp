#include "NhanVien.hpp"

NhanVien::NhanVien() 
{
	this->maSo = "";
	this->ten = "";
	this->luongCoBan = luongCoBan;
}

NhanVien::~NhanVien() {}

void NhanVien::nhap() 
{
    cout << "Nhap vao ma so nhan vien: ";
    getline(cin, maSo);
    cout << "Nhap vao ten nhan vien: ";
    getline(cin, ten);
    cout << "Nhap vao luong co ban: ";
    cin >> luongCoBan;
    cin.ignore();
}

void NhanVien::xuat() 
{
    cout << "Ma So Nhan Vien: " << maSo << endl;
    cout << "Ten Nhan Vien: " << ten << endl;
    cout << "Luong co ban: " << luongCoBan << endl;
}
