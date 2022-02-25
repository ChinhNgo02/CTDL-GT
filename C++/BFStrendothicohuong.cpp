#include<bits/stdc++.h>

using namespace std;

vector<int>ke[1005];
bool check[1005];
int truoc[1005];

void BFS(int u, int v) {
    queue<int> q;
    q.push(u);
    while(q.size() > 0) {
        int dau = q.front();
        q.pop();
        check[dau] = 1;
        if(dau == v) return;
        for(int i = 0; i < ke[dau].size();i++){
            if(!check[ke[dau][i]]) {
                check[ke[dau][i]] = 1;
                truoc[ke[dau][i]] = dau;
                q.push(ke[dau][i]);
            }
        }
    }
}

void Trace(int u, int v) {
    if(!check[v]) {
        cout << -1;
        return;
    }
    vector<int>a;
    while(u != v) {
        if(u == 0) {
            cout << -1;
            return;
        }
        a.push_back(u);
        u = truoc[u];
    }
    a.push_back(v);
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) {
     if(a.size()-1 != i)  cout << a[i] << " -> ";
     else cout << a[i] ;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) 
    {
        for(int i = 0; i < 1001 ;i++) ke[i].clear();
        memset(check , 0, sizeof(check));
        memset(truoc , 0, sizeof(truoc));
        int a, b, nguon, dich;
        cin >> a >> b >> nguon >> dich;
        for(int i = 0; i < b;i++) {
            int u , v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        BFS(nguon,dich);
        Trace(dich,nguon);
        cout <<"\n";
    }
}