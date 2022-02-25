#include<bits/stdc++.h>

using namespace std;
int k = 1;
class SinhVien {
    int ma;
    string name, mon, res ="", mon1 = "";
    public:
        friend istream & operator >> (istream &is, SinhVien &a){
            a.ma = k++;
            scanf("\n");
            getline(cin, a.name);
            getline(cin, a.mon);
            return is;
        }

        friend void ten(SinhVien &a, int n){
            vector<string>s, v;
            stringstream u;
            stringstream x;
            string tmp="", check = "";
            x << a.mon;
            u << a.name;
            while(u >> tmp){
                s.push_back(tmp);
            }
            while(x >> check){
                v.push_back(check);
            }
            int h = 0;
            string check1 = "";
            a.res = s[s.size()-1];
            for(int i = 0; i < v.size();i++){
                string strS = v[i];
                transform(strS.begin(), strS.end(), strS.begin(), :: tolower);
                strS[0] = toupper(strS[0]);
                check1 += strS[0];
            }
            a.mon1 = check1;
        }

        friend void sx(SinhVien ds[], int n){
            for(int i = 0; i < n-1;i++){
                for(int j = i+1; j < n;j++){
                    if(ds[i].res > ds[j].res) swap(ds[i], ds[j]);
                    else if(ds[i].res == ds[j].res && ds[i].ma > ds[j].ma) swap(ds[i], ds[j]); 
                }
            }
        }

        friend ostream & operator << (ostream &os, SinhVien &a){
            cout << "GV" << setfill('0') << setw(2) << a.ma << " " << a.name << " " << a.mon1 << endl;
            return os;
        }
};

int main(){
    SinhVien ds[100];
    int n;
    cin >> n;
    for(int i = 0; i < n;i++) cin >> ds[i];
    for(int i = 0; i < n;i++) ten(ds[i], n);
    sx(ds, n);
    for(int i = 0; i < n;i++) cout  << ds[i];
}

// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin