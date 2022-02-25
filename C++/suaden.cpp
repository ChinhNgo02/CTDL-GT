#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,b;
    cin>>n>>k>>b;
    int a[n+5]={0},x;
    for(int i=0;i<b;i++) {
        cin>>x;
       a[x-1]=1;
    }
    long long i=0,distance=n-k+1,Min=n;
    while(i<distance){
        long long sum=0;
        for(int j=i;j<k+i;j++){
            sum+=a[j];
        }
        Min=min(sum,Min);
        i++;
    }
    cout<<Min;
    return 0;
}
