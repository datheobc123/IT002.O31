// De.cpp
#include "De.hpp"
#include <iostream>
#include <random>

De::De(int sl) : GiaSuc(sl) {}

void De::keu() const {
    std::cout << "De: Meh meh!" << std::endl;
}

void De::sinh() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 4);
    soLuong += dis(gen);
}

void De::choSua() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 10);
    tongSua += soLuong * dis(gen);
}
