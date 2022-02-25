#include<bits/stdc++.h>
using namespace std;

typedef struct sinhvien{
    int ma;
	string mh;
    string nh;
    double d1, d2;
}SV;
int k = 1;
void nhap(SV &a){
    a.ma = k++;
    scanf("\n");
    getline(cin, a.mh);
    getline(cin, a.nh);
    cin >> a.d1 >> a.d2;
}

void in(SV sv[], int n){
    for(int i = 0; i < n-1;i++){
		for(int j = i+1; j < n;j++){
			if(sv[i].d2 - sv[i].d1 < sv[j].d2 - sv[j].d1){
				swap(sv[i],sv[j]);
			}
		}
	}
    for(int i = 0; i < n;i++){
        cout << sv[i].ma << " " << sv[i].mh << " " << sv[i].nh << " " << fixed << setprecision(2) << (sv[i].d2-sv[i].d1) << endl;
    }
}

int main(){
	SV sv[1000];
	int n;
	cin >> n;
    for(int i = 0; i < n;i++) nhap(sv[i]);
	in(sv, n);
}

