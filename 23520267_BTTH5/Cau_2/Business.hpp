#pragma once
#include "Hotel.hpp"

class Business : public Hotel {
private:
    int So_Dem;
public:
    Business(int So_Dem);
    void nhap();
    void xuat();
    double Doanh_thu() override;
    ~Business();
};
