#include<bits/stdc++.h>

using namespace std;
int k = 1;
class SinhVien {
    int ma;
    string name, mon, mon1 = "";
    public:
        friend istream & operator >> (istream &is, SinhVien &a){
            a.ma = k++;
            scanf("\n");
            getline(cin, a.name);
            getline(cin, a.mon);
            return is;
        }

        friend void ten(SinhVien &a, int n){
            vector<string> v;
            stringstream x;
            string check = "";
            x << a.mon;
            while(x >> check){
                v.push_back(check);
            }
            string check1 = "";
            for(int i = 0; i < v.size();i++){
                string strS = v[i];
                transform(strS.begin(), strS.end(), strS.begin(), :: tolower);
                strS[0] = toupper(strS[0]);
                check1 += strS[0];
            }
            a.mon1 = check1;
        }

        friend void in(SinhVien ds[], int n){
            int h;
            cin >> h;
            scanf("\n");
            string res[1005];
            string key[1005];
            for(int i = 0; i < h;i++){
                getline(cin, res[i]);
                key[i] = res[i];
                transform(res[i].begin(), res[i].end(), res[i].begin(), ::toupper);
            }
            for(int i = 0; i < h;i++){
                cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key[i] << ":" << endl;
                for(int j = 0; j < n;j++){
                    string ten1 = ds[j].name;
                    transform(ten1.begin(), ten1.end(), ten1.begin(), ::toupper);
                    int size = ten1.size();
                    int x = ten1.find(res[i]);
                    if(x >= 0 && x < size){
                        if(ds[j].ma <= 9)
                            cout << "GV0" << ds[j].ma << " " << ds[j].name << " " << ds[j].mon1 << endl;
                        else 
                            cout << "GV" << ds[j].ma << " " << ds[j].name << " " << ds[j].mon1 << endl;
                }
            }
        }
        }
};

int main(){
    SinhVien ds[1005];
    int n;
    cin >> n;
    for(int i = 0; i < n;i++) cin >> ds[i];
    for(int i = 0; i < n;i++) ten(ds[i], n);
    in(ds, n);
}

// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin

