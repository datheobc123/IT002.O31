#include <iostream>
#include "MSSV.hpp"
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
  cout << "Moi nhap so luong sinh vien: ";
  int n; cin >> n;
  cout << endl;
  vector <MSSV> v(n);
  for (int i = 0; i < n; ++i)
      v[i].Nhap();
    
  for (int i = 0; i < n; ++i)
      {
      if (v[i].Tong() == 1)
        v[i].Xuat();
      }
  if (n > 0) 
  {
        MSSV* sinhVienMax = &v[0];
        for (int i = 1; i < n; ++i) 
        {
            if (v[i].Tong() > sinhVienMax->Tong()) 
                sinhVienMax = &v[i];
        }

        cout << "Sinh vien co diem cao nhat: " << endl;
        sinhVienMax->Xuat();
    } 
    else {
        cout << "Khong co sinh vien nao." << endl;
    }
  return 0;
}