// Bo.cpp
#include "Bo.hpp"
#include <iostream>
#include <random>

Bo::Bo(int sl) : GiaSuc(sl) {}

void Bo::keu() const {
    std::cout << "Bo: Moo moo!" << std::endl;
}

void Bo::sinh() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);
    soLuong += dis(gen);
}

void Bo::choSua() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 20);
    tongSua += soLuong * dis(gen);
}
