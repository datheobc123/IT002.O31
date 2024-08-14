#include "MSSV.hpp"
#include <iostream>
#include <string>
using namespace std;
MSSV::MSSV() {}

MSSV::~MSSV() {}

void MSSV::Nhap()
{
	cin.ignore();
	cout << "Moi nguoi dung nhap vao ho va ten: " << endl;
	getline(cin, hoVaTen);
	cout << "Moi nguoi dung nhap vao MSSV: " << endl;
	cin >> maSo;
	cout << "Moi nguoi dung nhap vao ngay, thang, nam, sinh: " << endl;
	cin >> iNgay;
	cin >> iThang;
	cin >> iNam;
	cout << "Moi nguoi dung nhap vao lan luot diem Toan, diem Van, diem Anh: " << endl;
	cin >> fToan;
	cin >> fVan;
	cin >> fAnh;
	cout << endl;
}

void MSSV::Xuat()
{
	cout << "----------------------------------------------" << endl;
	cout << "Ho Va Ten: " << hoVaTen <<endl;
	cout << "MSSV: " << maSo << endl;
	cout << "Ngay, Thang, Nam sinh: " << iNgay << '/' << iThang << '/' << iNam << endl;
	cout << "Diem Toan: " << fToan << endl;
	cout << "Diem Van: " << fVan <<endl;
	cout << "Diem Anh: " << fAnh <<endl;
	cout << "----------------------------------------------" << endl;
}

bool MSSV::Tong()
{
	double a = this->fToan + this->fVan + this->fAnh;
	if (a>= 15)
		return true;
	return false;
}