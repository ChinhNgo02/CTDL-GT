#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &x:a) cin >> x;
        multiset<int>v;
        for(int i = 0; i < k;i++){
            v.insert(a[i]);
        }
        for(int i = k; i < n;i++){
            cout << *v.rbegin()<< " ";
            v.erase(v.find(a[i-k]));
            v.insert(a[i]);
        }
        cout << *v.rbegin() << endl;
    }
}