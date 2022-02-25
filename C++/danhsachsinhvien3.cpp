#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
    int ma;
    string ten;
    string lop;
    string date;
    float gpa;
};

void nhap(struct SinhVien ds[], int n){
    for(int i = 0; i < n;i++){
        ds[i].ma = i+1;
        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].date;
        scanf("\n");
        cin >> ds[i].gpa;
    }
}

int cmp(struct SinhVien a, struct SinhVien b){
	return a.gpa > b.gpa;
}

void sapxep(struct SinhVien ds[], int n){
    sort(ds,ds+n,cmp);
}

void in(struct SinhVien ds[], int n){
    for(int i = 0; i < n;i++){
        cout << "B20DCCN" << setfill('0') << setw(3) << ds[i].ma << " ";
        stringstream u;
        string tmp = "";
        string res = "";
        vector<string>t;
        u << ds[i].ten;
        while(u >> tmp){
            t.push_back(tmp);
        }
        for(int j = 0; j < t.size();j++){
            string strS = t[j];
            transform(strS.begin(), strS.end(), strS.begin(), :: tolower);
            strS[0] = toupper(strS[0]);
            res += strS + " ";
        }
        cout << res << ds[i].lop << " ";
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
    sapxep(ds,N);
    in(ds, N);
    return 0;
}