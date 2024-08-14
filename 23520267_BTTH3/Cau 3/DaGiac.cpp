#include "DaGiac.hpp"
#include <iostream>
#include <cmath> // Để sử dụng M_PI
using namespace std;
Diem::Diem(double a, double b) : x(a), y(b) {}

void Diem::setX(double a) { x = a; }

void Diem::setY(double b) { y = b; }

double Diem::getX() { return x; }

double Diem::getY() { return y; }

void Diem::TinhTien(double a, double b) {
    x += a;
    y += b;
}

void Diem::PhongTo(double k) {
    x *= k;
    y *= k;
}

void Diem::XuatDiem() {
    cout << "(" << x << "," << y << ")";
}

void Diem::QuayDiem(double a) {
    double x_new = x * cos(a) - y * sin(a);
    double y_new = x * sin(a) + y * cos(a);
    x = x_new;
    y = y_new;
}
DaGiac::DaGiac(int n) : n(n) {
    a = new Diem[n];
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        a[i] = Diem(x, y);
    }
}

DaGiac::~DaGiac() {
    delete[] a;
}

bool DaGiac::laDaGiac() {
    if (n < 3) return false;
    for (int i = 0; i < n; i++) {
        double x1 = a[i].x, y1 = a[i].y;
        double x2 = a[(i + 1) % n].x, y2 = a[(i + 1) % n].y;
        double x3 = a[(i + 2) % n].x, y3 = a[(i + 2) % n].y;
        if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) return false;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].x == a[j].x && a[i].y == a[j].y) return false;
        }
    }
    return true;
}

void DaGiac::TinhTien(double d, double e) {
    for (int i = 0; i < n; i++) {
        a[i].TinhTien(d, e);
    }
}

void DaGiac::XuatDaGiac() {
    for (int i = 0; i < n; i++) {
        a[i].XuatDiem();
    }
    cout << endl;
}

void DaGiac::PhongTo(double k) {
    for (int i = 0; i < n; i++) {
        a[i].PhongTo(k);
    }
}

void DaGiac::ThuNho(double k) {
    PhongTo(1 / k);
}

void DaGiac::QuayDaGiac(double k) {
    double h = (k / 180) * M_PI;
    for (int i = 0; i < n; i++) {
        a[i].QuayDiem(h);
    }
}
