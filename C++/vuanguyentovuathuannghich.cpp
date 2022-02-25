#include<bits/stdc++.h>

using namespace std;

int nt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
    return 1;
}

int tn(int n){
    int dao = 0;
    int b = n;
    while(n){
        dao = dao*10 + n % 10;
        n /= 10;
    }
    if(dao == b) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int dem = 0;
        for(int i = a; i <= b;i++){
            if(nt(i) && tn(i)){
                cout << i << " ";
                dem++;
            }
            if(dem == 10){
                cout << endl;
                dem = 0;
            }
        }
        cout << endl;
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int k,m,n;
//     cin>>k>>m>>n;
//     int a[105]={0};
//     bool flag=true;
//     while(flag==true){
//         int count1=0,count0=0;
//         int check=0;
//         for(int i=1;i<=n;i++){
//             if(a[i]==0) continue;
//             else{
//                 int dem1=0;
//                 while(i<=n&&a[i]==1){dem1++;i++;}
//                 if(dem1==m)  count1++;
//             }
//         }
//         for(int i=1;i<=n;i++){
//             if(a[i]==1) continue;
//             else{
//                 int dem0=0;
//                 while(i<=n&&a[i]==0){dem0++;i++;}
//                 if(dem0==k)  count0++;
//             }
//         }
//         if(count1==1&&count0==1){
//             for(int i=1;i<=n;i++)   cout<<a[i]<<" ";
//             cout<<endl;
//         }
//         for(int i=n;i>=1;i--){
//             if(a[i]==0){
//                 a[i]=1;
//                 for(int j=i+1;j<=n;j++)   {a[j]=0;}
//                 break;
//             }
//             else check++;
//         }
//         if(check==n)    flag=false;
//     }
// }



