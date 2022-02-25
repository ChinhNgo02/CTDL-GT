// #include<bits/stdc++.h>

// using namespace std;

// #define a() a
// int k = 1;
// class NhanVien {
//     private:
//         int id;
//         string name, gt, dc, ma, hd;
// 		char date[11];
//         int list[3] = {0};
//     public:

//         friend void getdate(NhanVien &a){
// 	    int i=0;
// 	    char *p=strtok(a.date,"/");
// 	    while(p!=NULL){
// 		    for(int j=0;j<strlen(p);j++)
// 			    a.list[i]=a.list[i]*10+(p[j]-'0');
// 		    i++;
// 		    p=strtok(NULL,"/");
// 	        }
//         }
//         friend istream &operator>>( istream  &input, NhanVien &a ) {
//             a.id = k;
//             scanf("\n");
//             getline(input, a.name);
//             getline(input, a.gt);
//             cin.getline(a.date,11);
//             getline(input, a.dc);
//             getline(input, a.ma);
//             getline(input, a.hd);
//             k++;
//             return input;
//         }

//         friend void sapxep(NhanVien a[], int n){
//         for(int i = 0; i < n;i++){
//             getdate(a[i]);
//         }
//         for(int i=0;i<n-1;i++){
// 		    for(int j=i+1;j<n;j++){
// 			    if(a[i].list[2]>a[j].list[2]) swap(a[i],a[j]);
// 			    else if(a[i].list[2]==a[j].list[2]){
// 				    if(a[i].list[0]>a[j].list[0]) swap(a[i],a[j]);
// 				    else if(a[i].list[0]==a[j].list[0]){
// 					    if(a[i].list[1]>a[j].list[1]) swap(a[i],a[j]);
// 		    		    }
// 			        }
// 		        }
//     	    }
//         }

//         friend ostream &operator<<( ostream &output, NhanVien &a ) {
//             if(a.list[1] < 10)
//             cout << setfill('0') << setw(5) << a.id << " " << a.name << " " << a.gt << " " << a.date << "/" << "0" << a.list[1] << "/" << a.list[2] << " " << a.dc << " " << a.ma << " " << a.hd << endl;
//             else
//             cout << setfill('0') << setw(5) << a.id << " " << a.name << " " << a.gt << " " << a.date << "/" << a.list[1] << "/" << a.list[2] << " " << a.dc << " "<< a.ma << " " << a.hd << endl;
//             return output;
//       }
// };

// int main(){
//     NhanVien a[50];
//     int N,i;
//     cin >> N;
//     for(i=0;i<N;i++) cin >> a[i];
//     sapxep(a, N);
//     for(i=0;i<N;i++) cout << a[i];
//     return 0;
// }

// // Nguyen Van A
// // Nam
// // 10/22/1982
// // Mo Lao-Ha Dong-Ha Noi
// // 8333012345
// // 31/12/2013
// // Ly Thi B
// // Nu
// // 10/15/1988
// // Mo Lao-Ha Dong-Ha Noi
// // 8333012346
// // 22/08/2011
// // Hoang Thi C
// // Nu
// // 04/02/1981
// // Mo Lao-Ha Dong-Ha Noi
// // 8333012347
// // 22/08/2011

#include <bits/stdc++.h>

using namespace std;

// #define a() a
int k = 1;
class NhanVien
{
public:
    int id, ngay, thang, nam;
    string name, gt, date, dc, ma, hd;
    friend istream &operator>>(istream &input, NhanVien &a)
    {
        a.id = k++;
        scanf("\n");
        getline(input, a.name);
        getline(input, a.gt);
        getline(input, a.date);
        // a.ngay = (a.date[3] - '0') * 10 + a.date[4] - '0';
        // a.thang = (a.date[0] - '0') * 10 + a.date[1] - '0';
        // a.nam = (a.date[6] - '0') * 1000 + (a.date[7] - '0') * 100 + (a.date[8] - '0') * 10 + a.date[9] - '0';
        getline(input, a.dc);
        cin >> a.ma;
        cin >> a.hd;
        a.ngay = (a.date[3] - '0') * 10 + a.date[4] - '0';
        a.thang = (a.date[0] - '0') * 10 + a.date[1] - '0';
        a.nam = (a.date[6] - '0') * 1000 + (a.date[7] - '0') * 100 + (a.date[8] - '0') * 10 + a.date[9] - '0';
        return input;
    }

    friend ostream &operator<<(ostream &output, NhanVien &a)
    {
        cout << setfill('0') << setw(5) << a.id << " " << a.name << " " << a.date << " " << a.dc << " " << a.ma << " " << a.hd << endl;
        return output;
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    if (a.nam != b.nam)
        return a.nam < b.nam;
    else
    {
        if (a.thang != b.thang)
            return a.thang < b.thang;
        else
            return a.ngay < b.ngay;
    }
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

int main()
{
    NhanVien a[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> a[i];
    sapxep(a, N);
    for (i = 0; i < N; i++)
        cout << a[i];
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