#include<bits/stdc++.h>

using namespace std;
string s[300000];

int main() {
    int n, k;
    cin >> n >> k;
    // string s[300000];
    scanf("\n");
    for(int i = 0; i < n;i++) getline(cin, s[i]);
    int count = 0;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j < n;j++){
            if(j - i <= k && s[i].length() == s[j].length()) count++;
            if(j-i > k) break;
        }
    }
    cout << count << endl;
}