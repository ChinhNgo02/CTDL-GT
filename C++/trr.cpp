// #include<bits/stdc++.h>
// using namespace std;
// bool solve(int n , int k , int a[]){
//     for(int i=0;i<=n-k;i++){
//         int cnt=0 , j=i;
//         while(a[j]==1 && j<n){
//             cnt++;
//             j++;
//         }
//         if(cnt==k)  return true;
//         i=j--;
//     }
//     return false;
// }
// void in(int a[] , int n){
//     for(int i=0 ;i < n ;i++) 
//        cout << a[i] << " " ;
//        cout <<  endl;
// }
// int main(){
//     int n , k ;
//     cin >> k >> n;
//     int a[n]={0};
//     int c=pow(2,n)-1;
//     while(c--){
//         for(int i=n-1 ; i>=0 ;i--){
//             a[i]++;
//             if(a[i]==2)  a[i]=0;
//             else break ;
//         }
//         if(solve(n,k,a)==true)   in(a,n);
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int dem = 0;
    for(int i = 0; i <= 1000;i++) {
        if(i % 6 == 0) dem++;
    }
    cout << dem;
}