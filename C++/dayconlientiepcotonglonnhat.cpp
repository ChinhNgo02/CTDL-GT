#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, max, sum, k = 0;
        cin >> n;
        long long a[n+5];
        for(long long i = 0; i < n;i++){
            cin >> a[i];
            if(a[i] > 0) k = 1;
            if( i == 0) max = a[i];
            else if(max < a[i]) max = a[i];
    }

    if(k == 0) cout << max << endl;
    else{
        long long sum = 0, x = 0;
        for(long long i = 0; i < n;i++){
            if(sum + a[i] < 0){
                sum = 0;
                continue;
            }
            sum+= a[i];
            if(x < sum) x = sum;
        }
        cout << x << endl;
    }
}
}

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n, X;
//         cin >> n >> X;
//         long long A[n+5], dem = 0;
//         for(long long i = 1; i <= n;i++) cin >> A[i];
//         for(long long i = 1; i <= n;i++){
//             if(A[i] == X) 
//             {
//                dem = i;
//                break;
//         }
//     }
//      if(dem == 0) cout << "NO" << endl;
//      else cout << dem << endl;
// }
// }
