#pragma once

class PhanSo {
private:
	int tuSo,mauSo;
public:

	PhanSo();
	void Nhap();
	void Xuat();
	void RutGon();
	static PhanSo Tong(PhanSo &P1, PhanSo &P2);
	static PhanSo Hieu(PhanSo &P1, PhanSo &P2);
	static PhanSo Tich(PhanSo &P1, PhanSo &P2);
	static PhanSo Thuong(PhanSo &P1, PhanSo &P2);
	static PhanSo SoSanh(PhanSo &P1, PhanSo &P2);
	~PhanSo();
	
};