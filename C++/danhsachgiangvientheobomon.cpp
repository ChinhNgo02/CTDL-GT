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
            string res[100];
            for(int i = 0; i < h;i++){
                getline(cin, res[i]);
            }
            for(int i = 0; i < h;i++){
                for(int j = 0; j < n;j++){
                    if(ds[j].mon == res[i]){
                        cout << "DANH SACH GIANG VIEN BO MON " << ds[j].mon1 << ":" << endl;
                        break;
                    }
                }
                for(int s = 0; s < n;s++){
                    if(ds[s].mon == res[i]){
                        cout << "GV" << setfill('0') << setw(2) << ds[s].ma << " " << ds[s].name << " " << ds[s].mon1 << endl;
                    }
                }
            }
        }
};

int main(){
    SinhVien ds[100];
    int n;
    cin >> n;
    for(int i = 0; i < n;i++) cin >> ds[i];
    for(int i = 0; i < n;i++) ten(ds[i], n);
    for(int i = 0; i < n;i++) in(ds, n);
}

// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin