#pragma once
#include "Hotel.hpp"

class Deluxe : public Hotel {
private:
    int So_Dem;
    double Phi_Phuc_Vu;
    double Phi_Dich_Vu;
public:
    Deluxe(int So_Dem, double Phi_Phuc_Vu, double Phi_Dich_Vu);
    void nhap();
    void xuat();
    double Doanh_thu() override; 
    ~Deluxe();
};
