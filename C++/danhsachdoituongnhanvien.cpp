#include<bits/stdc++.h>

using namespace std;

#define a() a
int k = 1;
class NhanVien {
    private:
        int id;
        string name, gt, dc, ma, hd;
		string date;
    public:
        friend istream &operator>>( istream  &input, NhanVien &a ) {
            a.id = k; 
            scanf("\n");
            getline(input, a.name);
            getline(input, a.gt);
            getline(input, a.date);
            getline(input, a.dc);
            getline(input, a.ma);
            getline(input, a.hd);
            k++;
            return input;            
        }
        friend ostream &operator<<( ostream &output, NhanVien &a ) { 
            cout << setfill('0') << setw(5) << a.id << " " << a.name << " " << a.gt << " " << a.date << " " << a.dc << " " << a.ma << " " << a.hd << endl;
            return output;            
      }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

// Nguyen Van A
// Nam
// 10/22/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 31/12/2013
// Ly Thi B
// Nu
// 10/15/1988
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011
// Hoang Thi C
// Nu
// 04/02/1981
// Mo Lao-Ha Dong-Ha Noi
// 8333012347
// 22/08/2011


