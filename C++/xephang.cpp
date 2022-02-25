#include<bits/stdc++.h>

using namespace std;

struct MH {
    string maMH, tenMH, tinchi;
    float cc, kt, thi, tong;
};

struct SV {
    string id, name, lop, tenMH1[100];
};

void nhapMH(MH &a){
    scanf("\n");
    getline(cin, a.maMH);
    getline(cin, a.tenMH);
    getline(cin, a.tinchi);
    cin >> a.cc >> a.kt >> a.thi;
}
int k ;

void nhapSV( SV &a){
    scanf("\n");
    getline(cin, a.id);
    getline(cin, a.name);
    getline(cin, a.lop);
    cin >> k;
    for(int i = 0; i < k;i++) cin >> a.tenMH1[i];
}

void in1(MH list[], int n, SV ds[], int m, int &k ) {
    for(int i = 0; i < n;i++){
        list[i].tong = list[i].cc * 0.1 + list[i].kt * 0.2 + list[i].thi *0.7;
    }
    for(int i = 0; i < m;i++){
        cout << ds[i].id << " " <<  ds[i].name << " " << ds[i].lop << ":" << endl;
        for(int h = 0; h < n;h++){
            for(int j = 0; j < k;j++){
            if(ds[i].tenMH1[j] == list[h].tenMH) cout << list[h].tenMH << ": " << fixed << setprecision(2) << list[h].tong << endl;
            }
        }
    }
}

void in2(MH list[], int n, SV ds[], int m, int &k ){
    cout << "DANH SACH >= 7.0: " << endl;
    for(int i = 0; i < m;i++){
        cout << ds[i].id << " " <<  ds[i].name << " " << ds[i].lop << ":" << endl;
        for(int h = 0; h < n;h++){
            for(int j = 0; j < k;j++){
            if(ds[i].tenMH1[j] == list[h].tenMH && list[h].tong >= 7.0) cout << list[h].tenMH << ": " << fixed << setprecision(2) << list[h].tong << endl;
            }
        }
    }
}

int main(){
    MH list[100];
    SV ds[100];
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n;i++) nhapMH(list[i]);
    for(int i = 0; i < m;i++) nhapSV(ds[i]);
    in1(list,n,ds,m,k);
    in2(list,n,ds,m,k);
}