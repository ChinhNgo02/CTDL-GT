// #include<bits/stdc++.h>

// using namespace std;
// int c[2000007] = {0};
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int m, n, k; 
//         int x = 1;
//         cin >> m >> n >> k;
//         int a[m + 5], b[n + 5];
//         // int c[2000007], x = 1;
//         for(int i = 1; i <= m;i++){
//              cin >> a[i];
//              c[x++] = a[i];
//         }
//         for(int i = 1; i <= n;i++){
//             cin >> b[i];
//             c[x++] = b[i];
//         }
//         sort(c+1, c+x);
//         for(int i = 1; i < x;i++) {
//             if(i == k){
//                 cout << c[i] << endl;
//                 break;
//             }
//         }
//     }
// }

#include<bits/stdc++.h>

using namespace std;
int c[2000007] = {0};
int main() {
    int t;
    cin >> t;
    while(t--) {
     long long n;
     cin >> n;
     long long a[n + 5], b[n+5 ];
     for(int i = 1; i <= n;i++) cin >> a[i];
     for(int i = 1; i <= n-1;i++) cin >> b[i];   
     for(int i = 1, j = 1; j <= n;i++,j++) {
         if(a[i] != b[i]){
              cout << i << endl;
              break;
         }
     }
    }
}

