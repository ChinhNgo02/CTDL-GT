#include<bits/stdc++.h>

using namespace std;
long long F[100];

char fibo(long long n, long long k ) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n-2]) return fibo(n-2, k);
    return fibo(n-1, k - F[n-2]);

}

int main() {
    F[0] = 0; F[1] = 1;
    for(int i = 2; i <= 92;i++) F[i] = F[i-1] + F[i-2];
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        cout << fibo(n , k) << endl;
    }
}
/*A
B
AB
BAB
ABBAB
BABABBAB
*/
// 1 1 2 3 5 8 13
