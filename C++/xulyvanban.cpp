#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int count = 0;
    while( cin >> s){
    //    if(s[0]=='0'&&s.size()==1) break;
        int k = s.size();
        if(count == 0) {
            if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
            for(int i = 1; i < k;i++){
                if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            }
        }
        else {
             for(int i = 0; i < k;i++){
                if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            }
        }
        count++;
        if(s[k-1] == '.' || s[k-1] == '?' || s[k-1] == '!'){
            s.pop_back();
            count = 0;
        }
        if(count == 0){
            cout << s << endl;
        }
        else {
            cout << s << " ";
        }
    }
}

