#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int dem;
        char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
        char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
        if(s[0] == '1' && s[1] == '0' && s[2] == '1'){
            int c = 0;
            dem = 0;
            for(int i = 4; i < s.length();i+=2){
                if(s[i] == a[c++]) dem++;
            }
        }
        else if(s[0] == '1' && s[1] == '0' && s[2] == '2'){
            int d = 0;
            dem = 0;
            for(int i = 4; i < s.length();i+=2){
                if(s[i] == b[d++]) dem++;
            }
        }
        double diem = dem*2.0/3;
        cout << fixed << setprecision(2) << diem << endl; 
    }
}