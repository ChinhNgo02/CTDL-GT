#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
    string ma, name, lop;
    float diemTHCS2, diemCPP;
};

void nhap(SinhVien &sv, ifstream &fp1) {
    fp1.ignore();
    getline(fp1, sv.ma);
    getline(fp1, sv.name);
    getline(fp1, sv.lop);
    fp1 >> sv.diemTHCS2;
    fp1 >> sv.diemCPP;
}

void xuat(SinhVien sv, ofstream &fp2) {
    fp2 << sv.ma << " " << sv.name << " " << sv.lop << " " << sv.diemTHCS2 << " " << sv.diemCPP << endl;
}

string ten(string name) {
    int list = name.rfind(" ");
    return name.substr(list + 1, name.length() - list -1);
}

string ho( string name) {
    int list = name.rfind(" ");
    return name.substr(0, list + 1);
}

int sap_xep_ten(SinhVien sv1, SinhVien sv2) {
    string ten1 = ten(sv1.name);
    string ten2 = ten(sv2.name);
    if(ten1 != ten2) {
        return ten1 < ten2;
    }
    string ho1 = ho(sv1.name);
    string ho2 = ho(sv2.name);
    return ho1 < ho2;
}

int sap_xep_diem(SinhVien sv1, SinhVien sv2) {
    return sv1.diemCPP + sv1.diemTHCS2 > sv2.diemCPP + sv2.diemTHCS2;
}

int main() {
    ifstream fp1;
    fp1.open("PTIT.in");
    ofstream fp2;
    fp2.open("PTIT.out");
    int n;
    fp1 >> n;
    SinhVien sv[n + 5];
    for(int i = 0; i < n;i++) {
        nhap(sv[i], fp1);
    }
    fp1.close();

    for(int i = 0; i < n;i++) {
        if(sv[i].diemCPP >= 7.0) {
            xuat(sv[i], fp2);
        }
    }

    fp2 << "___________________________________" << endl;
    sort(sv, sv + n, sap_xep_ten);
    for(int i = 0; i < n;i++) {
        xuat(sv[i], fp2);
    }

    fp2 << "___________________________________" << endl;
    sort(sv, sv + n, sap_xep_diem);
    for(int i = 0; i < n;i++) {
        xuat(sv[i], fp2);
    }
    fp2.close();
}