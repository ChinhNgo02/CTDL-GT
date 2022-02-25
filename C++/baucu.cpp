// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int A[b + 5];
//     int tmp[b + 5];
//     int k;
//     memset(A, 0, sizeof A);
//     memset(tmp, 0, sizeof tmp);
//     for (int i = 0; i < a; i++)
//     {
//         cin >> k;
//         A[k]++;
//         tmp[k] = A[k];
//     }

//     sort(tmp + 1, tmp + b + 1);
//     int sum = 0;
//     for(int i = b; i >= 1;i--){
//         if(tmp[i] != tmp[i-1]){
//             sum = tmp[i-1];
//             break;
//         }
//     }
//     // cout << sum << endl;
//     int check = 0 ;
//     for(int i = 1; i < b;i++){
//         for(int j = i+1; j <= b;j++){
//             if(tmp[i] != tmp[j]) check = 1;
//         }
//     }
//     if(check == 0){
//         cout << "NONE";
//     }
//     else {
//         for (int i = 1; i <= b; i++)
//             if (A[i] == sum)
//             {
//                 cout << i;
//                 break;
//             }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();
//     while (n--){
//         string s;
//         cin>>s;
//         int h=0;
//         long long  sum=0;
//         for (int i=0;i<s.length();i++){
//             if (s[i]>='0'&&s[i]<='9'){
//                 h=h*10+s[i]-'0';
//             }
//             if (s[i]>='a'&&s[i]<='z') {
//                 sum+=h;
//                 h=0;
//             }
//         }
//         sum +=h;
//         cout<<sum<<endl;
// }
// }

#include<bits/stdc++.h>

using namespace std;

int main() {
     int a, b, c;
     cin >> a >> b >> c;
     cout << a*(b+c) + b*(a+c) << endl;
}