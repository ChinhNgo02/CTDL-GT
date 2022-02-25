#include<bits/stdc++.h>

using namespace std;
#define a() a;

class SinhVien {
    private:
        string ma, name, lop, email;
    public:
        friend void nhap(SinhVien &a){
            scanf("\n");
            getline(cin, a.ma);
            getline(cin, a.name);
            getline(cin, a.lop);
            getline(cin, a.email);
        }
        friend void in(SinhVien ds[], int n){
            int M;
            cin >> M;
            string check[100];
            scanf("\n");
            for(int i = 0; i < M;i++){
                getline(cin, check[i]);
            }
            //cout << "DANH SACH SINH VIEN LOP " << endl;
            for(int i = 0; i < M;i++){
                cout << "DANH SACH SINH VIEN LOP " << check[i] << ":" << endl;
                for(int j = 0; j < n;j++){
                    if(ds[j].lop == check[i]){
                        cout << ds[j].ma << " " << ds[j].name << " " << ds[j].lop << " " << ds[j].email << endl;
                    }
                }
            }
        }
        
};

int main(){
    SinhVien ds[1000];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        nhap(ds[i]);
    }
    in(ds, N);
    return 0;
}

// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT02-B
// sv4@stu.ptit.edu.vn
// 1
// D15CQKT02-B