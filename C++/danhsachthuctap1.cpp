#include<bits/stdc++.h>

using namespace std;

typedef struct danhsachthuctap1
{
   int id;
   string name, lop, ma, email, dn;
}SV;

int k = 1;

void nhap(SV ds[], int n){
    for(int i = 0; i < n;i++){
        ds[i].id = k++;
        scanf("\n");
        getline(cin, ds[i].ma);
        getline(cin, ds[i].name);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].email);
        getline(cin, ds[i].dn);
    }
}
int cmp(SV a, SV b){
	return a.name < b.name;
}

void sapxep(SV ds[], int n){
    sort(ds,ds+n,cmp);
}

void in(SV ds[], int n){
    int M;
    cin >> M;
    string check[10];
    scanf("\n");
    for(int i = 0; i < M;i++){
        getline(cin,check[i]);
    }
    for(int i = 0; i < M;i++){
        for(int j = 0; j < n;j++){
            if(ds[j].dn == check[i]){
                cout << ds[j].id << " " << ds[j].ma << " " << ds[j].name << " " <<
                ds[j].lop << " " <<  ds[j].email << " " << ds[j].dn << endl;
            }
        }
    }
}


int main(){
    SV ds[100];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

// B17DCCN016 
// Le Khac Tuan Anh 
// D17HTTT2   
// test1@stu.ptit.edu.vn
// VIETTEL
// B17DCCN107 
// Dao Thanh Dat    
// D17CNPM5   
// test2@stu.ptit.edu.vn
// FPT
// B17DCAT092 
// Cao Danh Huy     
// D17CQAT04-B
// test3@stu.ptit.edu.vn
// FPT
// B17DCCN388 
// Cao Sy Hai Long  
// D17CNPM2   
// test4@stu.ptit.edu.vn
// VNPT
// B17DCCN461 
// Dinh Quang Nghia 
// D17CNPM2   
// test5@stu.ptit.edu.vn
// FPT
// B17DCCN554 
// Bui Xuan Thai    
// D17CNPM1   
// test6@stu.ptit.edu.vn
// GAMELOFT
// 1
// FPT
