#include <iostream>
#include "GioPhutGiay.hpp"
using namespace std;

int main() {
    GioPhutGiay time;
    time.Nhap();
    cout << "Thoi gian da nhap: ";
    time.Xuat();

    time.TinhCongThemMotGiay();
    cout << "Thoi gian sau khi them mot giay: ";
    time.Xuat();

    return 0;
}
