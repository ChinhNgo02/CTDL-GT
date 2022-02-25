#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name, lop, date;
    float gpa;
};

void nhapThongTinSV(SinhVien &a){
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop;
    cin >> a.date;
    cin >> a.gpa;
}

void inThongTinSV (SinhVien a){
    cout << "N20DCCN001 " << a.name << " " << a.lop << " ";
    if(a.date[2] != '/') a.date.insert(0,"0");
    if(a.date[5] != '/') a.date.insert(3,"0");
    cout << a.date << " " << setprecision(2) << fixed << a.gpa;
}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
