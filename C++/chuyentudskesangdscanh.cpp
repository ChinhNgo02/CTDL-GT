#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin.ignore();
    vector<int> ke[100];
    for(int i = 1; i <= n;i++){
        getline(cin, s);
        s += " ";
        int check = 0, j = 0;
        while(j < s.size()) 
        {
            if(s[j] >= '0' && s[j] <= '9')
                check = check * 10 + s[j] - '0';
            else {
                ke[i].push_back(check);
                check = 0;
            }
            j++;
        }
    }
    for(int i = 1; i <= n;i++) {
        for(int j = 0; j < ke[i].size();j++) {
            if(i < ke[i][j]) cout << " " << ke[i][j] << endl;
        }
    }
}

// 1 : 2 3
// 2 : 1 3
// 3 : 1 2