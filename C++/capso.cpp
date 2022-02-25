// #include<bits/stdc++.h>

// using namespace std;


// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int a[n];
//         for(int &i : a) cin >> i;
//         int start;
//         long long cnt = 0;
//         sort(a, a + n);
//         for(int i = 0; i < n;i++)
//         {
//             start = lower_bound(a + i + 1, a + n, k - a[i]) - a;
//             cnt += n - start;
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int A[15], n; bool B[15]; string s;
void in(){
    for(int i = 1; i <= n; i++) cout << s[A[i]-1];
    cout << " ";
}
void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(B[j] == false){
            A[i] = j; B[j] = true;
            if(i == n) in();
            else Try(i + 1);
            B[j] = false;
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s; n = s.length();
        for(int i = 1; i <= n; i++) B[i] = false;
        Try(1);
        cout << endl;
    }

}