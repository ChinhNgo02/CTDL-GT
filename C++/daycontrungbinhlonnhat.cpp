#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int a[1005];
        long long res=0;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=k;i++) res+=a[i];
        long long Max=res;
        int r=k+1,l=1,x;
        while(r<=n){
            res=res-a[l]+a[r];
            if(res>Max) x=l+1;
            Max=max(res,Max); 
            r++;l++;
        }
        k-=1;
        while(k--){
            cout<<a[x]<<" ";
            x++;
        }
        cout<<a[x];
        cout<<endl;
    }
    return 0;
}
//