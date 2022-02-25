#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        string msv="",name="",lop="",email="",year="20";
        friend istream &operator>>(istream &is, SinhVien &sv)
        {   
            is>>sv.msv;
            cin.ignore();
            getline(is, sv.name);
            is>>sv.lop>>sv.email;
            sv.year+=sv.lop[1];
            sv.year+=sv.lop[2];
            return is;
        }
        friend ostream &operator<<(ostream &os, SinhVien sv)
        {   
            os<<sv.msv<<" "<<sv.name<<" "<<sv.lop<<" "<<sv.email<<endl;
            return os;
        }
};

void lookAt(SinhVien *a,int N,string lop){
    for(int i=0;i<N;i++) {
            if(a[i].year==lop) cout<<a[i];
    }
}

int main(){
    SinhVien ds[1005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ds[i];
    int q;
    cin>>q;
    string s;
    vector<string> v;
    while(q--){
        cin>>s;
        v.push_back(s);
    }
    int len=v.size();
    for(int i=0;i<len;i++){
        cout<<"DANH SACH SINH VIEN KHOA "<<v[i]<<":"<<endl;
        lookAt(ds,n,v[i]);
    }
    return 0;
}