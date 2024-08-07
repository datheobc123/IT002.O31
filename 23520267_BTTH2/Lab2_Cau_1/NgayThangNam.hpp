class NgayThangNam
{
private:
    int iNgay;
    int iThang;
    int iNam;
    bool kiem_tra_nam_nhuan(int nam);

public:
    NgayThangNam();
    ~NgayThangNam();
    
    void nhap();
    void xuat();
    void NgayThangNamTiepTheo();
};


