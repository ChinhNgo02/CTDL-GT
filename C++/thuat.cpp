// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[100];
//     for(int i = 0; i < n;i++) cin >> a[i];
//     int dem = 0;
//     for(int i = 0; i < n-1;i++){
//         for(int j = i+1; j < n;j++){
//             if(a[i] > a[j]){
//                 swap(a[i],a[j]);
//                 dem++;
//             }
//         }
//             if(dem){
//                 cout << "Buoc " << i+1 << ": ";
//                 for(int j = 0; j < n;j++) cout << a[j] << " " ;
//                 cout << endl;
//             } 
//     }
// }

// sắp xếp chọn

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[100];
//     for(int i = 0; i < n;i++) cin >> a[i];
//     int dem = 0;
//     for(int i = 0; i < n-1;i++){
//         int min = i;
//         for(int j = i+1; j < n;j++)
//             if(a[min] > a[j]) min = j;
//                 swap(a[i],a[min]);
//                 dem++;   
//             if(dem){
//                 cout << "Buoc " << i+1 << ": ";
//                 for(int j = 0; j < n;j++) cout << a[j] << " " ;
//                 cout << endl;
//             } 
//     }
// }


// sắp xếp nổi bọt

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[100];
//     for(int i = 0; i < n;i++) cin >> a[i];
//     int dem = 0;
//     for(int i = 0; i < n;i++){
//         int key = 0;
//         for(int j = 0; j < n - i -1;j++)
//             if(a[j] > a[j+1]){
//                 swap(a[j],a[j+1]);
//                 key++;
//             } 
//             if(key){
//                 cout << "Buoc " << i+1 << ": ";
//                 for(int j = 0; j < n;j++) cout << a[j] << " " ;
//                 cout << endl;
//             } 
//     }
// }


// sắp xếp chèn 

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[100];
//     for(int i = 0; i < n;i++) cin >> a[i];
//     int dem = 0;
//     for(int i = 0; i < n;i++){
//         int min = 0;
//         for(int j = 0; j <= i;j++)
//             for(int k = 0; k <= i;k++)
//             if(a[j] < a[k]){
//                 swap(a[j],a[k]);
//             } 
//             cout << "Buoc " << i << ": ";
//             for(int j = 0; j <= i;j++) cout << a[j] << " " ;
//             cout << endl;
//     }
// }

// UCLN và BCNN

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long a, b;
//         cin >> a >> b;
//         long long UCLN = __gcd(a,b);
//         cout << UCLN << " " << a*b/UCLN << endl;
//     }
// }


// số tăng giảm 

// #include<bits/stdc++.h>

// using namespace std;

// int tang(string s){
//     for(int i = 0; i < s.length()-1;i++){
//         if(s[i] < s[i+1]) return 0;
//     }
//     return 1;
// }

// int giam(string s){
//     for(int i = 0; i < s.length()-1;i++){
//         if(s[i] > s[i+1]) return 0;
//     }
//     return 1;
// }

// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();
//     while(t--){
//         string s;
//         getline(cin, s);
//         if(tang(s) == 1) cout << "YES" << endl;
//         else if(giam(s) == 1) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
// }

// quick sort 

// #include<bits/stdc++.h>

// using namespace std;

// void sort(int a[],int n,int m){
//     int i=n,j=m;
//     int key=a[(n+m)/2];
//     while(i<=j){
//         while(a[i]<key) i++;
//         while(a[j]>key) j--;
//         if(i<=j){
//         	int tmp=a[i];
//         	a[i]=a[j];
//         	a[j]=tmp;
//             i++; j--;
// 		}
 
//     }
//     if(i<m) sort(a,i,m);
//     if(j>n) sort(a,n,j);
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n + 5];
//         for(int i = 0; i < n;i++) cin >> a[i];
//         sort(a, 0, n-1);
//         for(int i = 0; i < n;i++) cout << a[i] << " " ;
//         cout << endl;
//     }
// }

// số đầu tiên bị lặp

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n, check = 0;
//         cin >> n;
//         long long A[100001], b[100001] = {0};
//         for(long long i = 0; i < n;i++){
//              cin >> A[i];
//              b[A[i]]++;
//         }
//         for(long long i = 0; i < n;i++){
//             if(b[A[i]] > 1){
//                 cout << A[i] << endl;
//                 check = 1;
//                 break;
//             }
//         }
//         if(check == 0 ) cout << "NO" << endl;
//     }
// }
// chia hết cho 2
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, dem = 0;
//         cin >> n;
//         for(int i = 1; i <= sqrt(n);i++){
//             if(n % i == 0){
//                 int b = n / i;
//                 if(i % 2 == 0) dem++;
//                 if( i*i != n && b % 2 == 0) dem++;
//             }
//         }
//         cout << dem << endl;
//     }
// }


