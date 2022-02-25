// #include<bits/stdc++.h>

// using namespace std;

// struct SinhVien {
//     string ma, name, lop;
//     float THCS2, tin3;
// };

// void nhap(SinhVien &a){
//     scanf("\n");
//     getline(cin, a.ma);
//     getline(cin, a.name);
//     getline(cin, a.lop);
//     cin >> a.THCS2 >> a.tin3;
// }

// void in(SinhVien ds[], int n){
//     cout << "Phan b:" << endl;
//     for(int i = 0;i < n;i++){
//         if(ds[i].tin3 >= 7.0){
//             cout << ds[i].ma << " " << ds[i].name << " " << ds[i].lop << " " << fixed << setprecision(2) << ds[i].THCS2 << " "  << fixed << setprecision(2) << ds[i].tin3 << endl;
//         }
//     }
// }

// int cmp(SinhVien &a, SinhVien &b){
//     return a.name < b.name;
// }

// void in1(SinhVien ds[], int n){
//     sort(ds, ds+n, cmp);
//     cout << "Phan c:" << endl;
//     for(int i = 0; i < n;i++){
//             cout << ds[i].ma << " " << ds[i].name << " " << ds[i].lop << " " << fixed << setprecision(2) << ds[i].THCS2 << " "  << fixed << setprecision(2) << ds[i].tin3 << endl;
//     }
// }

// int cmp1(SinhVien &a, SinhVien &b){
//     return a.THCS2 + a.tin3 >= b.tin3 + b.THCS2;
// }

// void in2(SinhVien ds[], int n){
//     cout << "Phan d:" << endl;
//     sort(ds,ds+n,cmp1);
//     for(int i = 0; i < n;i++){
//             cout << ds[i].ma << " " << ds[i].name << " " << ds[i].lop << " " << fixed << setprecision(2) << ds[i].THCS2 << " "  << fixed << setprecision(2) << ds[i].tin3 << endl;
//     }
// }

// int main() {
//     SinhVien ds[100];
//     int n;
//     cin >> n;
//     for(int i = 0; i < n;i++) nhap(ds[i]);
//     in(ds, n);
//     in1(ds, n);
//     in2(ds, n);
// }

#include<iostream>
using namespace std;


int main(){
    int test;
    cin>>test;
    while(test--){
        int x1,y1,z1,x2,y2,z2,x3,y3,z3,x4,y4,z4;
        cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3>>x4>>y4>>z4;
        int a1=x2-x1,b1=y2-y1,c1=z2-z1;
        int a2=x3-x1,b2=y3-y1,c2=z3-z1;
        int a3=x4-x1,b3=y4-y1,c3=z4-z1;
         x1=b1*c2-b2*c1,y1=a1*c2-a2*c1,z1=a1*b2-a2*b1;
        int sum=x1*a3+y1*b3+c3*z1;
        int sum1=x1*a3-b3*y1+z1*c3;
        if(sum==0||sum1==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}