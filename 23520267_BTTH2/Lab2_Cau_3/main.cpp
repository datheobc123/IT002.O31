#include <iostream>
#include "SoPhuc.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    SoPhuc a, b;

    cout << "Nhap So Phuc Thu 1: ";
    a.Nhap();
    cout << "So Phuc Thu 1: ";
    a.Xuat();

    cout << "Nhap So Phuc Thu 2: ";
    b.Nhap();
    cout << "So Phuc Thu 2: ";
    b.Xuat();
    
    cout << endl;

    SoPhuc cong = a.Tong(b);
    cout << "Tong: ";
    cong.Xuat();

    SoPhuc tru = a.Hieu(b);
    cout << "Hieu: ";
    tru.Xuat();

    SoPhuc nhan = a.Tich(b);
    cout << "Tich: ";
    nhan.Xuat();

    SoPhuc chia = a.Thuong(b);
    cout << "Thuong: ";
    chia.Xuat();

    return 0;
}

