#include "Cow.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Cow::Cow() 
{
	SetAnimalType(1); 
}

void Cow::Nhap() 
{
    SetAnimalType(1);
    SetAnimalTiengKeu("Bo");
}

void Cow::ChoSua() 
{
    float tmp;
    do 
    {
    	tmp = rand() % 21; 
    } 
    while (tmp < 0 || tmp > 20);

    SetAnimalSua(tmp);
}

void Cow::SinhCon() 
{
    SetAnimalCon(1);
}

void Cow::TiengKeu() {
    cout << "Toi la Bo va Toi Rat Doi" << endl;
}

