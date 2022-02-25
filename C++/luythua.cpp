// #include<bits/stdc++.h>

// using namespace std;

// #define mod 1000000007

// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while(t--){
//         string s1[1000000];
//         string s;
//         getline(cin, s);
//         // string s1[1000/000];
//         int k = 0;
//         s1[k] = "";
//         for(int i = 0; i < s.length();i++){
//             s1[k] += s[i] ;
//             if(s[i] == ' '){
//                 k++;
//                 s1[k] = "";
//             }
//         }
//         for(int i = 0; i < k;i++){
//             for(int j = s1[i].length()-1; j >= 0 ;j--){
//                 cout << s1[i][j];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// ghép hình

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//     int a[10];
//     int S = 0, r = 0;
//     for(int i = 0; i < 6;i++) cin >> a[i];
//     int max = a[0];
//     for(int i = 0; i < 6;i++)
//         if(max < a[i]) max = a[i];
//     for(int i = 0; i < 2;i++) {
//         for(int j = 2; j < 4;j++){
//             for(int k = 4; k < 6;k++){
//                 if (((a[i]+a[j])==max) || ((a[i]+a[k])==max)|| ((a[k]+a[j])==max))
// 					S++;
// 				if ((a[i]==a[j]) &&(a[i]==a[k]))
// 					r++;
//             }
//         }
//     }
//     int Shv = max*max, DT=a[1]*a[0]+a[2]*a[3]+a[4]*a[5];
//     if( (DT == Shv && S == 5) || (DT==Shv && r!=0)) cout << "YES" << endl;
//     else cout << "NO" << endl;
//     }
// }

#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 1;
        for(int i = 1; i <= k;i++){
            sum = (sum*n)%mod;
        }
        cout << sum << endl;
    }
}