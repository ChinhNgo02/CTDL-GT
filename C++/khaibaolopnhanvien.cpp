#include<bits/stdc++.h>

using namespace std;

#define a() a

class NhanVien {
    private:
        string name, gt, dc, ma, hd;
		string date;
    public:
        friend istream &operator>>( istream  &input, NhanVien &a ) { 
            getline(input, a.name);
            getline(input, a.gt);
            getline(input, a.date);
            getline(input, a.dc);
            getline(input, a.ma);
            getline(input, a.hd);
            return input;            
        }
        friend ostream &operator<<( ostream &output, NhanVien &a ) { 
            cout << "00001 " << a.name << " " << a.gt << " " << a.date << " " << a.dc << " " << a.ma << " " << a.hd << endl;
            // cout << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
            return output;            
      }
};

int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}