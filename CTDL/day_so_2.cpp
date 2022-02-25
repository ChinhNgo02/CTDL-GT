#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;
int n;

void output(){
    for(int i = ans.size()-1 ; i >= 0 ; i--){
        cout << "[";
        for(int j = 0 ; j < ans[i].size()-1 ; j++){
            cout << ans[i][j] << " ";
        }
        cout << ans[i].back() << "] ";
    }
    cout << endl;
}

void input(vector<int>&a) {
    cin >> n;
    a.resize(n);
    for(int &i : a) cin >> i;
    ans.push_back(a);
}

void solve(vector<int> a) {
    if(a.size() == 1) {
        output();
        return;
    }
    else {
        vector<int> b;
        for (int i = 0; i < a.size()-1; i++) {
            b.push_back(a[i] + a[i+1]);
        }
        ans.push_back(b);
        solve(b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        vector<int>a;
        input(a);
        solve(a);
        ans.clear();
    }
}