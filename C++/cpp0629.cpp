#include<bits/stdc++.h>

using namespace std;

class SV {
    string ma, ten;
    int so;
    public:
        friend istream &operator >> (istream &is, SV &a){
            scanf("\n");
            getline(cin, a.ma);
            getline(cin, a.ten);
            cin >> a.so;
            return is;
        }

        friend void sx(SV ds[], int n){
            for(int i = 0; i < n-1;i++){
                for(int j = i+1; j < n;j++){
                    if(ds[i].so < ds[j].so) swap(ds[i], ds[j]);
                    else if(ds[i].so == ds[j].so && ds[i].ma > ds[j].ma) swap(ds[i], ds[j]);
                }
            }
            int k;
            cin >> k;
            int a[k+5], b[k+5];
            for(int i = 0; i < k;i++){
                cin >> a[i] >> b[i];
            }
            for(int i = 0; i < k;i++){
                cout << "DANH SACH DOANH NGHIEP NHAN TU " << a[i] << " DEN " << b[i] << " SINH VIEN:" << endl;
                for(int j = 0; j < n;j++){
                    if(ds[j].so >= a[i] && ds[j].so <= b[i])
                    cout << ds[j].ma << " " << ds[j].ten << " " << ds[j].so << endl;
                }
            }
        }
         
}; 

int main(){
    SV ds[100];
    int n;
    cin >> n;
    for(int i = 0; i < n;i++) cin >> ds[i];
    sx(ds,n);
  //  for(int i = 0; i < n;i++) cout << ds[i];
}

// VIETTEL
// TAP DOAN VIEN THONG QUAN DOI VIETTEL
// 40
// FSOFT
// CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
// 300
// VNPT
// TAP DOAN BUU CHINH VIEN THONG VIET NAM
// 200
// SUN
// SUN*
// 50