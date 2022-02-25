// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         long long A[n+5], kq = 0;
//         for(long long i = 0; i < n;i++) cin >> A[i];
//         sort(A, A+n);
//         long long e1=0, e2=n-1, minsum[n+5] = 999999999999;
//         while(e1 < e2){
//             kq = A[e1]+A[e2];
//             if(abs(kq) <= abs(minsum)){
//                 minsum = kq;
//             }
//             if(kq < 0) e1++;
//             else e2--;
//         }
//         cout << minsum << endl;
//     }
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long A[n], minsum = 999999999;
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < n-1;i++){
            for(long long j = i+1; j < n;j++){
                if(abs(A[i]+A[j]) < abs(minsum)){
                    minsum = A[i]+A[j];
                }
            }
        }
        cout << minsum << endl;
    }
}