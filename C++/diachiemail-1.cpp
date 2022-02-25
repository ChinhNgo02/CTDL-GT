#include<bits/stdc++.h>

using namespace std;
void thuong(string s){
    for(int i = 0; i < s.length();i++) s[i] = tolower(s[i])
    return s;
}
int main(){
    string s;
    getline(cin, s);
    thuong(s);
    
}