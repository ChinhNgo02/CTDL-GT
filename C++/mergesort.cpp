// tập con kế tiếp
// #include<bits/stdc++.h>

// using namespace std;

// void solve(){
//     int n, k;
//         cin >> n >> k;
//         int a[k + 5];
//         for(int i = 1; i <= k; i++){
//             cin >> a[i];
//         }
//         int i = k;
//         while(i > 0 && a[i] == n-k+i) i -= 1; // 
//         if(i <= 0) {
//             for(int i = 1; i <= k;i++) cout << i << " ";
//             cout << endl;
//         }
//         else {
//             a[i] += 1;
//             for(int j = i+1; j <= k;j++) a[j] = a[j-1] + 1;
//             for(int i = 1; i <= k;i++) cout << a[i] << " ";
//             cout << endl;
//         }
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
// }

// merge sort
#include<iostream> 
using namespace std; 
  
void merge(int arr[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 

    for(int i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 

    int i = 0;  
    int j = 0;  
    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j])  
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  // 9 38 27 43 3 82 10
    while (i < n1)  
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
    for (int i = 0; i < )
} 
  
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l + (r - l) / 2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
} 
    
void printArray(int A[], int size) 
{ 
    for(int i = 0; i < size; i++) 
        cout << A[i] << " "; 
        cout << endl;
} 
  
int main() 
{ 
   int t;
   cin >> t;
   while(t--) {
       int n;
       cin >> n;
       int a[n + 5];
       for ( int i = 0; i < n;i++) cin >> a[i];
       mergeSort(a, 0, n-1);
       printArray(a,n);
   }
} 