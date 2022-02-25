#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        string str;
        cin>>n;
        cin>>str;
        long long len=str.size(),sum=0;
        vector<int> v;
        for(int i=0;i<len;i++) v.push_back(int (str[i]-'0'));
        for(int i=0;i<len;i++){
            sum=(sum*10+v[i])%n;
        }
        long long uc=__gcd(sum,n);
        cout<<uc;
        cout<<endl;
    }
    return 0;
}