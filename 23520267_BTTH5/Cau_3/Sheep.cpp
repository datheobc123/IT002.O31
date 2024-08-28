#include "Sheep.hpp"
#include <cstdlib>
#include <iostream>
using namespace std;

Sheep::Sheep() { SetAnimalType(2); }

void Sheep::Nhap() {
    SetAnimalType(2);
    SetAnimalTiengKeu("Beeeeeeeeeee!!!");
}

void Sheep::ChoSua() {
    float temp;
    do {
        temp = rand() % 6; // Limit từ 0 đến 5
    } while (temp < 0 || temp > 5);

    SetAnimalSua(temp);
}

void Sheep::SinhCon() {
    SetAnimalCon(1);
}

void Sheep::TiengKeu() {
    cout << "Toi la Cuu va Toi Rat Doi \n";
}