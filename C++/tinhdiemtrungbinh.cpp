#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    double Arr[n+5];
    for(int i=0; i<n; i++){
        cin >> Arr[i];
    }
    sort(Arr, Arr+n);
    double sum=0;
    int count=0;
    for(int i=1; i<n-1; i++){
        if(Arr[i]!= Arr[0] && Arr[i]!= Arr[n-1]){
        sum+=Arr[i];
        count++;
         }
    }
    cout << fixed << setprecision(2) << sum/count;
    return 0;
}