#pragma once
class Diem
{
private:
    int iHoanh, iTung;
public:
    Diem();
    Diem(int, int);
    Diem(const Diem &x);
    void Xuat();
    void SetTungDo(int Tung);
    void SetHoanhDo(int Hoanh);
    int GetTungDo();
    int GetHoanhDo();
    void TinhTien(int a, int b);
    ~Diem();
}; 