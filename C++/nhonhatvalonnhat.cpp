#include<bits/stdc++.h>

using namespace std;

string nhonhat(int m, int s){
    if(s > 9*m ||(m > 1 && s == 0)) return "-1";
    vector<int>v(m);
    string res = "";
    s -= 1;
    for(int i = m-1; i > 0;i--){
        if(s > 9){
            v[i] = 9;
            s -= 9;
        }
        else{
            v[i] = s;
            s = 0;
        }
    }
        v[0] = s+1;
        for(int i = 0; i < m;i++){
            res.push_back(v[i]+'0');
        }
        return res;   
}

string lonnhat(int m, int s){
    if(s > 9*m || ( m > 1 && s == 0)) return "-1";
    vector<int>v(m);
    string res = "";
    for(int i = 0; i < m;i++){
        if(s > 9){
            v[i] = 9;
            s -= 9;
        }
        else{
            v[i] = s;
            s = 0;
        }
    }
    for(int i = 0; i < m;i++){
        res.push_back(v[i]+'0');
    }
    return res;
}

int main(){
    int m, s;
    cin >> m >> s;
    cout << nhonhat(m,s) << " " << lonnhat(m, s) << endl;
}

