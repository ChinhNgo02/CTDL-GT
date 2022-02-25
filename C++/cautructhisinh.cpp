#include<bits/stdc++.h>

using namespace std;

struct SinhVien  {
    string ten;
    string lop;
    string ntn;
    float a;
};

void nhap(SinhVien &A){
    getline(cin, A.ten);
    getline(cin, A.lop);
    getline(cin, A.ntn);
    cin >> A.a;
}

void in (SinhVien &A){
   cout << "B20DCCN001 " << A.ten << " " << A.lop << " ";
   if(A.ntn.length() == 8){
       for(int i = 0; i < 8;i++){
           if(i == 0 || i == 2) cout << "0" << A.ntn[i];
           else cout << A.ntn[i];
       }
        cout << " ";
   }
   else if(A.ntn.length() == 9){
       for(int i = 0; i < 9;i++){
           if(i == 0 && A.ntn[1] == '/') cout << "0" << A.ntn[i];
           else if( i == 3 && A.ntn[2] == '/') cout << "0" << A.ntn[i];
           else cout <<A.ntn[i];
       } 
        cout << " ";
   }
   else cout << A.ntn << " ";
   cout << fixed << setprecision(2) << A.a << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

