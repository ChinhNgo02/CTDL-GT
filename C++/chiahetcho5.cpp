#include<bits/stdc++.h>

using namespace std;
void check(){
    string s;
    int temp2 = 0, temp = 0;
    cin >> s;
    for(int i = s.length()-1; i >= 0;i--){
        if(s[i] == '1'){
            if(temp % 4 == 0) temp2 += 1;
            else if(temp % 4 == 1) temp2 += 2;
            else if(temp % 4 == 2) temp2 += 4;
            else if(temp % 4 == 3) temp2 += 3;
        }
        temp++;
    }
    if(temp2 % 5 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}
