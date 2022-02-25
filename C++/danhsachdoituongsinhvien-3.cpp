#include<bits/stdc++.h>

using namespace std;
int k = 1;
class SinhVien{
public: 
    int id;
    string name,lop,date;
    float gpa;
        friend istream &operator >> (istream &input, SinhVien &a){
            a.id = k;
            scanf("\n");
            getline(input, a.name);
            getline(input, a.lop);
            getline(input, a.date);
            input >> a.gpa;
            k++;
            return input;
        }
    
        friend ostream &operator<< (ostream & output, SinhVien &a){
            cout << "B20DCCN" << setfill('0') << setw(3) << a.id << " ";
            stringstream u;
            string tmp = " ";
            string res = " ";
            vector<string>t;
            u << a.name;
            while(u >> tmp){
                t.push_back(tmp);
            }
            for(int i = 0; i < t.size();i++){
                string strS = t[i];
                transform(strS.begin(), strS.end(), strS.begin(), :: tolower);
                strS[0] = toupper(strS[0]);
                res += strS + " ";
            }
            cout << res << " " << a.lop << " ";
            if(a.date[2] != '/') a.date.insert(0,"0");
            if(a.date[5] != '/') a.date.insert(3,"0");
            cout << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
            return output;
        }
};

int cmp(SinhVien &a, SinhVien &b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n){
    sort(ds, ds+n, cmp);
}


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}