#include "Goat.hpp"
#include <cstdlib>
#include <iostream>
using namespace std;

Goat::Goat() 
{
	SetAnimalType(3); 
}

void Goat::Nhap() 
{
    SetAnimalType(3);
    SetAnimalTiengKeu("Be");
}

void Goat::ChoSua() 
{
    float temp;
    do 
    {
        temp = rand() % 11; //  từ 0 đến 10
    } 
    while (temp < 0 || temp > 10);

    SetAnimalSua(temp);
}

void Goat::SinhCon() 
{
    SetAnimalCon(1);
}

void Goat::TiengKeu() 
{
    cout << "Toi la De va Toi Rat Doi" << endl;
}
