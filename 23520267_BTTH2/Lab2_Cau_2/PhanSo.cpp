#include "PhanSo.hpp"
#include <iostream>
#include <algorithm>
using namespace std;
PhanSo::PhanSo() {}
PhanSo::~PhanSo() {}

void PhanSo::Nhap()
{
	cin >> this->tuSo >> this->mauSo;
}

void PhanSo::Xuat() {
	//Rut Gon
    RutGon(); 

    if (mauSo == 0)
        cout << "Mau So Khong The Bang Khong 0!" << endl;
    else if (tuSo == 0) 
        cout << "0" << endl; // Nếu tử số bằng 0, in "0"
    else 
    {
        // Xử lý phân số có mẫu số dương hoặc âm
        if (mauSo == 1) 
            cout << this->tuSo << endl;
            // Nếu mẫu số là 1, chỉ cần in tử số
        else if (mauSo == -1) 
            cout << -this->tuSo << endl; 
            // Nếu mẫu số là -1, in âm của tử số
        else if ((this->tuSo > 0 && this->mauSo > 0) || (this->tuSo < 0 && this->mauSo < 0)) 
            cout << this->tuSo << '/' << this->mauSo << endl; 
            // Phân số với mẫu số dương hoặc âm
        else if (this->tuSo > 0 && this->mauSo < 0) 
            cout << -this->tuSo << '/' << -this->mauSo << endl; 
            // Mẫu số âm, chuyển dấu
        else 
            cout << this->tuSo << '/' << this->mauSo << endl; 
            // Trường hợp khác
    }
}

void PhanSo::RutGon()
{
	if (this->mauSo == 0)
	{
		//Mau so khong the = 0
		cout << "Mau So Khong The Bang 0! Xin Moi Nhap Lai!!!"; 
		exit(1);
	}
    int ucln = __gcd(abs(tuSo), abs(mauSo));
    this->tuSo /= ucln;
    this->mauSo /= ucln;
    //tử số luôn dương
    if (mauSo < 0) 
    {
        tuSo = -tuSo;
        mauSo = -mauSo;
    }
}

//Hàm Tính Tổng giữa 2 Phân Số
PhanSo PhanSo::Tong(PhanSo &P1, PhanSo &P2)
{
	PhanSo kq;
	kq.tuSo = P1.tuSo * P2.mauSo + P2.tuSo * P1.mauSo;
	kq.mauSo = P1.mauSo * P2.mauSo;
	kq.RutGon(); 
	return kq;
}
//Hàm Tính Hiệu giữa 2 Phân Số
PhanSo PhanSo::Hieu(PhanSo &P1, PhanSo &P2)
{
	PhanSo kq;
	kq.tuSo = P1.tuSo * P2.mauSo - P2.tuSo * P1.mauSo;
	kq.mauSo = P1.mauSo * P2.mauSo;
	kq.RutGon(); 
	return kq;
}
// Hàm tính tích giữa 2 phân số
PhanSo PhanSo::Tich(PhanSo &P1, PhanSo &P2)
{
	PhanSo kq;
	kq.tuSo = P1.tuSo * P2.tuSo;
	kq.mauSo = P1.mauSo * P2.mauSo;
	kq.RutGon(); 
	return kq;
}
//Hàm tính Thương giữa 2 phân số
PhanSo PhanSo::Thuong(PhanSo &P1, PhanSo &P2)
{
	PhanSo kq;
	kq.tuSo = P1.tuSo * P2.mauSo;
	kq.mauSo = P1.mauSo * P2.tuSo;
	kq.RutGon();
	return kq;
}
//Hàm lấy ra phân số lớn nhất trong 2 phân số
PhanSo PhanSo::SoSanh(PhanSo &P1, PhanSo &P2)
{
	PhanSo result = Hieu(P1,P2);
	return (result.tuSo > 0) ? P1 : P2;
}