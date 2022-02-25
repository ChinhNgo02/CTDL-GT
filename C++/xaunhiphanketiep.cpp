#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int len = s.length();
        int check = 0;
        for(int i = len - 1; i >= 0;i--){
            if(s[i] == '0'){
                s[i] = '1' ;
                check = i;
                break;
            }
        }
        int key = 0;
        if(check == 0) {
            for(int i = 0; i < len ;i++){
                s[i] = '0';
                cout << s[i];
            }
        }
        else {
            for(int i = check+1 ; i < len;i++){
                s[i] = '0';
                key = 1;
            }
            key = 1;
        }
        if(key == 1) cout << s ;
        cout <<endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;

// long long nt(long long n){
//     if(n < 2) return 0;
//     for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
//     return 1;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         int check = 0;
//         for(long long i = 2; i <= n;i++){
//             if(nt(i)){
//                 if(nt(n - i) == 1) {
//                     cout << i << " " << n-i << endl; 
//                     check = 1;
//                     break;
//                }
//             }
//         }
//         if(check == 0) cout << "-1" << endl;
//     }
// }