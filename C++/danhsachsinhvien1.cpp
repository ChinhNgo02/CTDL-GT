#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
    string ten;
    string lop;
    string date;
    float gpa;
};

void nhap(struct SinhVien ds[], int n){
    for(int i = 0; i < n;i++){
        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].date;
        cin >> ds[i].gpa;
    }
}

void in(struct SinhVien ds[], int n){
    for(int i = 0; i < n;i++){
        cout << "B20DCCN" << setfill('0') << setw(3) << i+1 << " ";
        cout << ds[i].ten << " " << ds[i].lop << " ";
        if(ds[i].date.length() == 8){
       for(int j = 0; j < 8;j++){
           if(j == 0 || j == 2) cout << "0" << ds[i].date[j];
           else cout << ds[i].date[j];
        }
        cout << " ";
        }
        else if(ds[i].date.length() == 9){
        for(int j= 0; j < 9;j++){
           if(j == 0 && ds[i].date[1] == '/') cout << "0" << ds[i].date[j];
           else if( j == 3 && ds[i].date[2] == '/') cout << "0" << ds[i].date[j];
           else cout <<ds[i].date[j];
        } 
        cout << " ";
   }
         else cout << ds[i].date << " ";
         cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}