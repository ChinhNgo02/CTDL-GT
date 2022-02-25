#include<bits/stdc++.h>

using namespace std;
#define a() a;

class SinhVien {
    private:
        string ma, name, lop, email;
    public:
        friend istream &operator>> (istream &input, SinhVien &a){
            scanf("\n");
            getline(input, a.ma);
            getline(input, a.name);
            getline(input, a.lop);
            getline(input, a.email);
            return input;
        }

       friend void sapxep (SinhVien ds[], int n){
           for(int i = 0; i < n-1;i++){
               for(int j = i+1; j < n;j++){
                   if(ds[i].lop > ds[j].lop) swap(ds[i], ds[j]);
                   else if(ds[i].lop == ds[j].lop && ds[i].ma > ds[j].ma) swap(ds[i], ds[j]);
               }
           }
       }

        friend ostream &operator<< (ostream &output, SinhVien &a){
            cout << a.ma << " " << a.name << " " << a.lop << " " << a.email << endl;
            return output;
        }

};

int main(){
    SinhVien ds[1000];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

