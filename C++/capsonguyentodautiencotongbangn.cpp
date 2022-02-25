// #include<bits/stdc++.h>
// using namespace std;

// int nt (int n){
//     if(n < 2) return 0;
//     for(int i = 2; i <= sqrt(n);i++) if(n % i == 0) return 0;
//     return 1; 
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, dem = 0;
//         cin >> n;
//         for(int i = 2; i <= n/2;i++){
//             if(nt(i) && nt(n-i)){
//                 cout << i << " " << n-i << endl;
//                 dem = 1;
//                 break;
//             }
//         }
//         if(dem == 0) cout << "-1" << endl;
//     }
// }

#include<bits/stdc++.h>

using namespace std;

int nt (int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n);i++) {
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(nt(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}