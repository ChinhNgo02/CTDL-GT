#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n;i++) cin >> a[i];
        multimap<int, int>v;
        sort(a, a+n, greater<int>());
        for(int i = 0; i < n;i++){
            int dem = 1;
            while(a[i] == a[i+1]){
                dem++;
                i++;
            }
            v.insert({dem, a[i]});
        }
        int b[n], k = 0;
        for(auto &it:v){
            for(int i = 0; i < it.first;i++){
              b[k++] = it.second;
            }
        }
        reverse(b, b+n);
        for(int i = 0; i < n;i++) cout << b[i] << " ";
        cout << endl;
    }
}
// 5 5 4 6 4 
// 4 4 5

