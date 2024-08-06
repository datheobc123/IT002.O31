#include <iostream>
#include "PhanSo.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
	PhanSo P1,P2;
	PhanSo PhepCong, PhepTru, PhepTich, PhepThuong, PhepSoSanh;

	cout << "Nhap Vao Phan So Thu Nhat" << endl;
	P1.Nhap();
	cout << "Phan So Thu Nhat la: ";
	P1.Xuat();
	cout << "Nhap Vao Phan So Thu Hai" << endl;
	P2.Nhap();
	cout << "Phan So Thu Hai la: " << endl;
	P2.Xuat();

	PhepCong = PhanSo::Tong(P1,P2);
	PhepTru = PhanSo::Hieu(P1,P2);
	PhepTich = PhanSo::Tich(P1,P2);
	PhepThuong = PhanSo::Thuong(P1,P2);
	PhepSoSanh = PhanSo::SoSanh(P1,P2);
	
	cout << "Tong hai phan so la: "; PhepCong.Xuat();
	cout << "Hieu hai phan so la: "; PhepTru.Xuat();
	cout << "Tich hai phan so la: "; PhepTich.Xuat();
	cout << "Thuong hai phan so la: "; PhepThuong.Xuat();
	cout << "Phan so lon nhat trong 2 phan so la: "; PhepSoSanh.Xuat();
	return 0;
}