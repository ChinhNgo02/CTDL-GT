#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    public:
        string msv="",name="",lop="",email="",course="DC";
        friend istream &operator>>(istream &is, SinhVien &sv)
        {   
            is>>sv.msv;
            sv.course+=sv.msv[5];
            sv.course+=sv.msv[6];
            cin.ignore();
            getline(is, sv.name);
            is>>sv.lop>>sv.email;
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
            if(lop=="DCCN"||lop=="DCAT"){
                if(a[i].course==lop&&a[i].lop[0]!='E') cout<<a[i];
            }else {
                if(a[i].course==lop) cout<<a[i];
            }
    }
}

int main(){
    SinhVien ds[1005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ds[i];
    int q;
    cin>>q;
    cin.ignore();
    string s;
    vector<string> v,v1;
    while(q--){
        getline(cin,s);
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]>='a'&&s[i]<='z') s[i]-=32;
        }
        if(s=="KE TOAN") {v.push_back("DCKT");v1.push_back(s);}
        else if(s=="CONG NGHE THONG TIN") {v.push_back("DCCN");v1.push_back(s);}
        else if(s=="AN TOAN THONG TIN") {v.push_back("DCAT");v1.push_back(s);}
        else if(s=="VIEN THONG") {v.push_back("DCVT");v1.push_back(s);}
        else if(s=="DIEN TU") {v.push_back("DCDT");v1.push_back(s);}
    }
    int len=v.size();
    for(int i=0;i<len;i++){
        cout<<"DANH SACH SINH VIEN NGANH "<<v1[i]<<":"<<endl;
        lookAt(ds,n,v[i]);
    }
    return 0;
}

