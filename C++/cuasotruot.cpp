#include<iostream>
using namespace std;


int main(){
    long long m,n;
    cin>>n;
    long long a[200][200],b[200][200];
    for(long long i=1;i<=n;i++){
        for(long long j=1;j<=n;j++) cin>>a[i][j];
    }
    cin>>m;
    for(long long i=1;i<=m;i++){
        for(long long j=1;j<=m;j++) cin>>b[i][j];
    }
    long long k=n/m,x=1,y=0;
    while(k--){
        long long z=1;
        for(long long i=x;i<=m+y;i++){
            long long h=1;
            for(long long j=1;j<=n;j++){
                if(j%m==0) {
                    a[i][j]*=b[z][h];
                    h=1;
                }else a[i][j]*=b[z][h++];
            }
            z++;
        }
        x+=m;
        y+=m;
    }
    for(long long i=1;i<=n;i++){
        for(long long j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

