#ifndef FARM_HPP
#define FARM_HPP

#include "Animal.hpp"

class Farm {
public:
    Animal** An;
    int n;
    int loai;
    int select;

    void Menu();
    void Nhap();
    void Xuat();
    void ThongKeSua();
    void ThongKeCon();
    void DoiDoi();
};

#endif
