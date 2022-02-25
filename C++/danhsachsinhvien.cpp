#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
    string ten, gt, ns, dc, hd, thue;
};
int k = 0;
void nhap(NhanVien &a){
    if( k == 0) cin.ignore();
    k++;
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.thue);
    getline(cin, a.hd);
}

void inds(NhanVien ds[], int N){
    for(int i = 1; i <= N;i++){
        cout << setfill('0') << setw(5) << i << " ";
        cout << ds[i - 1].ten << " " << ds[i - 1].gt << " " << ds[i - 1].ns << " " << ds[i - 1].dc << " " << ds[i - 1].thue << " " << ds[i - 1].hd << endl;
        }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
