#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        char s;
        cin >> s;
        if(s >= 'a' && s <= 'z'){
            s -= 32;
            cout << s << endl;
        }
        else if(s >= 'A' && s <= 'Z'){
            s +=32;
            cout << s<< endl;
        }
    }
}