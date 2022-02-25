#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, S;
    cin >> n >> S;
    long long a[31];
    for(int i = 0; i < n;i++) cin >> a[i];
    sort(a, a+n);
    int sum = 0, count = 0;
    for(int i = n-1; i >= 0;i--){
        if(sum + a[i] > S) {
            sum = sum;
        }
        else if(sum + a[i] < S) {
            sum += a[i];
            count++;
        }
        else {
            sum += a[i];
            count++;
            break;
        }
    }
    cout << sum << endl;
    cout << count << endl;
}
