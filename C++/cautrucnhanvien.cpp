#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
    string ten, gt, ntn, dc, hd;
    long long gia;
};

void nhap(NhanVien &A){
    getline(cin, A.ten);
    getline(cin, A.gt);
    getline(cin, A.ntn);
    getline(cin, A.dc);
    cin >> A.gia;
    cin.ignore();
    getline(cin, A.hd);
}

void in(NhanVien &A){
    cout << "00001 " << A.ten << " " << A.gt << " " << A.ntn
    << " " << A.dc << " " << A.gia << " " << A.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

