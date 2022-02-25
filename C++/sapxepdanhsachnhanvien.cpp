#include<bits/stdc++.h>

using namespace std;

struct  NhanVien
{
    int ma;
    string name, gt;
    char date[11];
    string dc, gia, hd;
    int list[3] = {0};
};
int k = 1;

void getdate(NhanVien &a){
	int i=0;
	char *p=strtok(a.date,"/");
	while(p!=NULL){
		for(int j=0;j<strlen(p);j++)
			a.list[i]=a.list[i]*10+(p[j]-'0');
		i++;
		p=strtok(NULL,"/");
	}
}

void nhap(NhanVien &a){
    a.ma = k++;
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gt);
    cin.getline(a.date,11);
    getline(cin, a.dc);
    getline(cin, a.gia);
    getline(cin, a.hd);
}

void sapxep(NhanVien ds[], int n){
    for(int i = 0; i < n;i++){
        getdate(ds[i]);
    }
    for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].list[2]>ds[j].list[2]) swap(ds[i],ds[j]);
			else if(ds[i].list[2]==ds[j].list[2]){
				if(ds[i].list[0]>ds[j].list[0]) swap(ds[i],ds[j]);
				else if(ds[i].list[0]==ds[j].list[0]){
					if(ds[i].list[1]>ds[j].list[1]) swap(ds[i],ds[j]);
				}
			}
		}
	}
}

void inds(NhanVien ds[], int n){
    for(int i = 0; i < n;i++){
        if(ds[i].list[1] < 10)
        cout << setfill('0') << setw(5) << ds[i].ma << " " << ds[i].name << " " << ds[i].gt << " " << ds[i].date << "/" << "0" << ds[i].list[1] << "/" << ds[i].list[2] << " " << ds[i].dc << " "<< ds[i].gia << " " << ds[i].hd << endl;
        else 
        cout << setfill('0') << setw(5) << ds[i].ma << " " << ds[i].name << " " << ds[i].gt << " " << ds[i].date << "/" << ds[i].list[1] << "/" << ds[i].list[2] << " " << ds[i].dc << " "<< ds[i].gia << " " << ds[i].hd << endl;

   }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

