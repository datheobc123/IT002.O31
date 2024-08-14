#include <iostream>
#include <cmath> // Để sử dụng M_PI

class Diem {
    double x;
    double y;
public:
    Diem(double a=0, double b=0);
    void setX(double a);
    void setY(double b);
    double getX();
    double getY();
    void TinhTien(double a, double b);
    void PhongTo(double k);
    void XuatDiem();
    void QuayDiem(double a);
    
    friend class DaGiac;
};

class DaGiac {
    int n;
    Diem *a;
public:
    DaGiac(int n);
    ~DaGiac();
    bool laDaGiac();
    void TinhTien(double d, double e);
    void XuatDaGiac();
    void PhongTo(double k);
    void ThuNho(double k);
    void QuayDaGiac(double k);
};

