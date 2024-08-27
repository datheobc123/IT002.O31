#include "Business.hpp"
#include <iostream>
using namespace std;

Business::Business(int So_Dem)
{
	this->So_Dem = So_Dem;
}

void Business::nhap()
{
    cout << "Xin moi nhap so dem cua phong Business: ";
    cin >> So_Dem;
}

void Business::xuat()
{
    cout << "Doanh thu phong Business la: " << Doanh_thu() << endl;
}

double Business::Doanh_thu()
{
    return So_Dem * 300000;
}

Business::~Business() {}
