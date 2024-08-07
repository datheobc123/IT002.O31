#include "NgayThangNam.hpp"
#include <iostream>
using namespace std;

NgayThangNam::NgayThangNam() {}

NgayThangNam::~NgayThangNam() {}

void NgayThangNam::nhap() 
{
    cout << "Nhap Vao Ngay Thang Nam: " << endl;
    cout << "Vui long nhap ngay: " << endl;
    cin >> iNgay;
    cout << "Vui long nhap thang: " << endl;
    cin >> iThang;
	cout << "Vui long nhap nam: " << endl;
    cin >> iNam;
}

void NgayThangNam::xuat()
{
	cout << "Ngay Thang Nam Vua Nhap La: ";
	cout << iNgay << '/' << iThang << '/' << iNam << endl;
}

bool NgayThangNam::kiem_tra_nam_nhuan(int nam)
{
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

void NgayThangNam::NgayThangNamTiepTheo()
{
    if (iNgay < 1 || iNgay > 31 || iThang < 1 || iThang > 12 || iNam < 1)
    {
        cout << "Invalid" << endl;
        return;
    }

    int ngayKeTiep = iNgay;
    int thangKeTiep = iThang;
    int namKeTiep = iNam;

    if (iNgay == 31 && (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10))
    {
        ngayKeTiep = 1;
        thangKeTiep = iThang + 1;
    }
    else if (iNgay == 30 && (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11))
    {
        ngayKeTiep = 1;
        thangKeTiep = iThang + 1;
    }
    else if (iThang == 2)
    {
        if (kiem_tra_nam_nhuan(iNam))
        {
            if (iNgay == 29)
            {
                ngayKeTiep = 1;
                thangKeTiep = 3;
            }
            else
            {
                ngayKeTiep = iNgay + 1;
            }
        }
        else
        {
            if (iNgay == 28)
            {
                ngayKeTiep = 1;
                thangKeTiep = 3;
            }
            else if (iNgay > 28)
            {
                cout << "Invalid" << endl;
                return;
            }
            else
            {
                ngayKeTiep = iNgay + 1;
            }
        }
    }
    else if (iThang == 12 && iNgay == 31)
    {
        ngayKeTiep = 1;
        thangKeTiep = 1;
        namKeTiep = iNam + 1;
    }
    else
    {
        ngayKeTiep = iNgay + 1;
    }

    if ((ngayKeTiep == 1 && (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11)) ||
        (ngayKeTiep == 1 && iThang == 2 && iNgay > 28))
    {
        thangKeTiep = iThang + 1;
    }

    cout << "Ngay ke tiep la: " << ngayKeTiep << '/' << thangKeTiep << '/' << namKeTiep << endl;
}

