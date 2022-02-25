#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll check(ll a, ll m){
    for(int i = 0; i < m;i++) if((a*i)%m==1){
         return i;
         break;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, m;
        cin >> a>> m;
        cout << check(a, m) << endl;
    }
}