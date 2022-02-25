#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        string msv="",ten="",lop="",tinnhan="";
        friend istream &operator>>(istream &is, SinhVien &obj)
        {
            is>>obj.msv;
            cin.ignore();
            getline(is, obj.ten);
            is>>obj.lop>>obj.tinnhan;
            return is;
        }
        friend ostream &operator<<(ostream &os, SinhVien obj)
        {   
            os<<obj.msv<<" "<<obj.ten<<" "<<obj.lop<<" "<<obj.tinnhan<<endl;
            return os;
        }
};

void sapxep(SinhVien *a,int N){
    for(int i=0;i<N-1;i++) {
        for(int j=i+1;j<N;j++){
            if(a[j].msv<a[i].msv) swap(a[i],a[j]);
        }
    }
}

int main(){
    SinhVien ds[1005];
    int k=0;
    while(1){
        cin>>ds[k];
        if(k==1000 ||(ds[k].msv=="0"&&ds[k].ten=="0"&&ds[k].lop=="0"&&ds[k].tinnhan=="0")) break;
        k++;
    }
    sapxep(ds,k);
    for(int i=0;i<k;i++) cout<<ds[i];
    return 0;
}