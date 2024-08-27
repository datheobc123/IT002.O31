#pragma once
#include "Hotel.hpp"

class Premium : public Hotel {
private:
    int So_Dem;
    double Phi_Dich_Vu;
public:
    Premium(int So_Dem, double Phi_Dich_Vu);
    void nhap();
    void xuat() ; 
    double Doanh_thu() override; 
    ~Premium();
};
