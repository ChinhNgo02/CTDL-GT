#include<bits/stdc++.h>

using namespace std;

long long check(string a){
    int count = 0;
    int i = 0, dd = 0;
    while(a[i] != '\0'){
        if(a[i] == ' ' || a[i] == '\n' || a[i] == '\t') dd = 0;
        else if(dd==0){
            dd = 1;
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin, a);
        cout << check(a) << endl;
    }
}