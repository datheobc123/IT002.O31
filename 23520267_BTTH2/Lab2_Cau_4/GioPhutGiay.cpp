#include "GioPhutGiay.hpp"
#include <iostream>
using namespace std;
GioPhutGiay::GioPhutGiay() {}

GioPhutGiay::~GioPhutGiay() {}

void GioPhutGiay::Nhap()
{
	cout << "Nhap Gio" << endl;
	cin >> iGio;
	cout << "Nhap Phut" << endl;
	cin  >> iPhut;
	cout << "Nhap Giay" << endl;
	cin >> iGiay;
}

void GioPhutGiay::Xuat()
{
	cout << "Thoi Gian: " << iGio << " gio " << iPhut << " phut " << iGiay << " giay." << endl;
}

void GioPhutGiay::TinhCongThemMotGiay() 
{
    int Tong_Giay = iGio * 3600 + iPhut * 60 + iGiay;
    Tong_Giay += 1;
    iGio = Tong_Giay / 3600;
    Tong_Giay %= 3600;
    iPhut = Tong_Giay / 60;
    iGiay = Tong_Giay % 60;
}
