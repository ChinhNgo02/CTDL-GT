#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    int a[1005][1005];
    for(int i = 1; i <= n;i++){
        getline(cin, s);
        s += " ";
        int check = 0, j = 0;
        while(j < s.size()) {
            if(s[j] >= '0' && s[j] <= '9') check = check *10 + s[j] - '0';
            else if(check > 0) {
                a[i][check] = 1;
                check = 0;
            }
            j++;
        }
    }
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
            if(a[i][j] == 1) cout << a[i][j] << " ";
            else cout << "0" << " ";
        }
        cout << "\n";
    }
}