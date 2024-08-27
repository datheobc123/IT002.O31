#include <iostream>
#include "NhanVien.hpp"
#include "KySu.hpp"
#include "QuanLy.hpp"
using namespace std;

int main(int argc, char const *argv[])
{

    QuanLy quanLy;
    cout << "Nhap thong tin quan ly:" << endl;
    quanLy.nhap();

    KySu kySu;
    cout << "Nhap thong tin ky su:" << endl;
    kySu.nhap();	

    cout << endl;

    cout << "Thong tin quan ly:" << endl;
    quanLy.xuat();
    cout << "Tien Thuong: " << quanLy.TienThuong() << endl;

    cout << endl;

    cout << "Thong tin ky su:" << endl;
    kySu.xuat();
    cout << "Tien Thuong: " << kySu.TienThuong() << endl;

    return 0;
}
