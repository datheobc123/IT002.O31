// Cuu.cpp
#include "Cuu.hpp"
#include <iostream>
#include <random>

Cuu::Cuu(int sl) : GiaSuc(sl) {}

void Cuu::keu() const {
    std::cout << "Cuu: Baa baa!" << std::endl;
}

void Cuu::sinh() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 2);
    soLuong += dis(gen);
}

void Cuu::choSua() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 5);
    tongSua += soLuong * dis(gen);
}
