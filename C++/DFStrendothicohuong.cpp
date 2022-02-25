#include<bits/stdc++.h>

using namespace std;

vector<int>ke[1005];
bool check[1005];

void DFS(int dinh) {
    check[dinh] = 1;
    cout << dinh << " ";
    check[dinh] =1 ;
    for(int i = 0; i < ke[dinh].size();i++){
        if(!check[ke[dinh][i]]) {
            DFS(ke[dinh][i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie();
    int t;
    cin >> t;
    while(t--) 
    {   
        for(int i = 0; i < 1001;i++) ke[i].clear();
        memset(check, 0,sizeof(check));
        int a, b, dinh;
        cin >> a >> b >> dinh;
        for(int i = 0; i < b;i++) 
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
        }
        DFS(dinh);
        cout << "\n";
    }
}

// 1 2
// 2 5
// 3 1
// 3 2
// 3 5
// 4 3
// 5 4
// 5 6
// 6 3
// 1: 2
// 2: 5
// 3: 1 2 5
// 4: 3
// 5: 4 6
// 6: 3
//1 2 5 4 6 3 