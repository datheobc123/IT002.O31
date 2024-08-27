// main.cpp
#include "Bo.hpp"
#include "Cuu.hpp"
#include "De.hpp"
#include <iostream>
#include <vector>

int main() {
    int slBo, slCuu, slDe;
    
    std::cout << "Nhap so luong bo ban dau: ";
    std::cin >> slBo;
    std::cout << "Nhap so luong cuu ban dau: ";
    std::cin >> slCuu;
    std::cout << "Nhap so luong de ban dau: ";
    std::cin >> slDe;

    Bo bo(slBo);
    Cuu cuu(slCuu);
    De de(slDe);

    std::vector<GiaSuc*> nongTrai = {&bo, &cuu, &de};

    std::cout << "\na) Tieng keu cua gia suc khi doi:\n";
    for (const auto& giaSuc : nongTrai) {
        giaSuc->keu();
    }

    std::cout << "\nb) Thong ke sau mot lua sinh va mot luot cho sua:\n";
    for (auto& giaSuc : nongTrai) {
        giaSuc->sinh();
        giaSuc->choSua();
    }

    std::cout << "So luong bo: " << bo.getSoLuong() << std::endl;
    std::cout << "So luong cuu: " << cuu.getSoLuong() << std::endl;
    std::cout << "So luong de: " << de.getSoLuong() << std::endl;
    std::cout << "Tong so sua: " << (bo.getTongSua() + cuu.getTongSua() + de.getTongSua()) << " lit" << std::endl;

    return 0;
}
