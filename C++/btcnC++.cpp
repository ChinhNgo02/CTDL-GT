
#include<bits/stdc++.h>

using namespace std;

struct monHoc{
	string ma;
	string ten;
	int tc;
	float diemCC;
	float diemKT;
	float diemTHI;
	float diemTB;
};

struct sinhVien{
	string maSV;
	string hoTen;
	string lop;
	monHoc sv_mh;
	float diemTB;
};

monHoc timMonHoc(string ma, monHoc mangMonHoc[], int n){
	for(int i=0;i<n;i++){
		if(mangMonHoc[i].ma==ma){
			return mangMonHoc[i];
		}
	}
	monHoc mh;
	mh.ma=-1;
	return mh;
}

int main(){
	int n,m;
	cin >> n >> m;
	monHoc mangMonHoc[n];
	for(int i=0;i<n;i++){
		cin.ignore();
		cin >> mangMonHoc[i].ma;
		cin.ignore();
		getline(cin,mangMonHoc[i].ten );
		cin >> mangMonHoc[i].tc;
	}
	sinhVien mangSinhVien[m];
	for(int i=0;i<m;i++){
		cin.ignore();
		cin >> mangSinhVien[i].maSV;
		getline(cin,mangSinhVien[i].hoTen );
		cin >> mangSinhVien[i].lop;
		int k;
		cin >> k;
		monHoc mangSinhVien[i].sv_mh[k];
		float tongDiem=0;
		float tongTC=0;
		for(int j=0;j<k;j++){
			int ma_j;
			cin >> ma_j;
			mangSinhVien[i].sv_mh[j] = timMonHoc(ma_j, mangMonHoc, n);
			cin >> mangSinhVien[i].sv_mh[j].diemCC;
			cin >> mangSinhVien[i].sv_mh[j].diemKT;
			cin >> mangSinhVien[i].sv_mh[j].diemTHI;
			mangSinhVien[i].sv_mh[j].diemTB = (
			mangSinhVien[i].sv_mh[j].diemCC*10 + 
			mangSinhVien[i].sv_mh[j].diemKT*20 + 
			mangSinhVien[i].sv_mh[j].diemTHI*70	)/100;
			tongDiem += mangSinhVien[i].sv_mh[j].diemTB * mangSinhVien[i].sv_mh[j].tc;
			tongTC += mangSinhVien[i].sv_mh[j].tc;
		}
		mangSinhVien[i].diemTB = tongDiem/tongTC;
	}
	for(int i=0;i<m;i++){
		if(mangSinhVien[i].diemTB >= 7.0){
			cout << mangSinhVien[i].maSV << " " << mangSinhVien[i].hoTen << " " << mangSinhVien[i].lop << " " << mangSinhVien[i].diemTB << "\n";
		}
	}
	return 0;
}
