#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n][n];
        multiset< int >v;
        for(int i = 0; i < n;i++){
            set< int > s;
            for(int j = 0; j < n;j++){
                cin >> a[i][j];
                s.insert(a[i][j]);
            }
            for(int x:s){
                v.insert(x);
            }
        }
        vector<int>u;
        for(int x:v) u.push_back(x);
        int dem = 0;
        for(int i = 0; i < u.size();i++){
            int count = 1;
            while(u[i] == u[i+1]){
                count++;
                i++;
            }
            if(count == n) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}