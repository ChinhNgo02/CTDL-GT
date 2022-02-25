#include <bits/stdc++.h>

using namespace std;

class ThietBi
{
    public:
    int maTB;
    string tenTB, ngay_mua;
    int gia_mua;
    void Nhap();
    void Xuat();
};

void ThietBi::Nhap()
{
    cin >> maTB;
    fflush(stdin);
    getline(cin, tenTB);
    getline(cin, ngay_mua);
    cin >> gia_mua;
}

void ThietBi::Xuat()
{
    cout << "maTB : " << maTB << " " << tenTB << " " << ngay_mua << " " << gia_mua << endl;
}

class PhongHoc
{
    int toanha, n;
    string nguoi_quan_ly;
    ThietBi *x;

public:
    void Nhap();
    void Xuat();
    void Xuat1();
    void Xuat2();
};
void PhongHoc::Nhap()
{
    cout << "Nhap phong hoc" << endl;
    cin >> toanha;
    fflush(stdin);
    getline(cin, nguoi_quan_ly);
    cout << "Nhap so thiet bi" << endl;
    cin >> n;
    x = new ThietBi[n];
    for (int i = 0; i < n; i++)
    {
        x[i].Nhap();
    }
}

void PhongHoc::Xuat()
{
    cout << "Xuat PhongHoc" << endl;
    cout << "Toa Nha : " << toanha << " " << nguoi_quan_ly << " ";
    for (int i = 0; i < n; i++)
    {
        x[i].Xuat();
        cout << endl;
    }

}

void PhongHoc::Xuat1()
{
    cout << "Xuat Phong Hoc sap xep thiet bi" << endl;
    cout << "Toa Nha : " << toanha << " " << nguoi_quan_ly << " ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) {
            if(x[i].gia_mua > x[j].gia_mua)
                swap(x[i], x[j]);
        }
    }
    for (int i = 0; i < n;i++) {
        x[i].Xuat();
        cout << endl;
    }
}

void PhongHoc::Xuat1()
{
    cout << "Xuat Phong Hoc gia mua tu 5000 den 7000" << endl;
    cout << "Toa Nha : " << toanha << " " << nguoi_quan_ly << " ";
    for (int i = 0; i < n; i++)
    {
        if(x[i].gia_mua >= 5000 && x[i].gia_mua <= 7000) {
            x[i].Nhap();
        }
        cout << endl;
    }
}

class Phong

{
    int maPH;
    string tenPH, loai;
    int dien_tich;

public:
    void Nhap();
    void Xuat();
};

void Phong::Nhap() {
    cout << "Nhap thong tin Phong" << endl;
    cin >> maPH;
    fflush(stdin);
    getline(cin, tenPH);
    getline(cin, loai);
    cin >> dien_tich;
    loai = "GIANG DUONG";
}


void Phong::Xuat() {

}

int main()
{
    PhongHoc a;
    a.Nhap();
    a.Xuat();
    a.Xuat1();
    a.Xuat2();
}