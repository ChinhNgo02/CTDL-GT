// #include <bits/stdc++.h>
// using namespace std;

// #define a() a

// class SinhVien{
// public: 
//     string name,lop,date;
//     float gpa;
//         friend void nhap(SinhVien &a){
//             getline(cin,a.name);
//             cin>>a.lop;
//             cin>>date;
//             cin>>a.gpa;
//         }
//         friend void in(SinhVien a){
//             cout << "B20DCCN001 Nguyen Van A " << a.lop << " ";
//             if(date[2] != '/') date.insert(0,"0");
//             if(date[5] != '/') date.insert(3,"0");
//             cout << date << " " << fixed << setprecision(2) << a.gpa << endl;
//         }
// };

// int main(){
//     SinhVien a();
//     nhap(a);
//     in(a);
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

class SinhVien {
    public:
        string name, lop, date;
        float GPA;
        void nhap() {
            getline(cin, name);
            getline(cin, lop);
            getline(cin, date);
            scanf("\n");
            cin >> GPA;
        }
        void xuat() {
            cout << "B20DCCN001 "  << name << " "<< lop << " ";
            if(date[2] != '/') date.insert(0,"0");
            if(date[5] != '/') date.insert(3,"0");
            cout << date << " " << fixed << setprecision(2) << GPA << endl;
        }
}; 

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}