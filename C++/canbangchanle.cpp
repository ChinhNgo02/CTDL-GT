#include<bits/stdc++.h>

using namespace std;

int check (int n){
    int c = 0, l =0;
    while(n){
        if((n % 10) % 2 ==0) c++;
        else l++;
        n/=10;
    }
    if(c == l && n % 2 ==0) return 1;
    return 0;
}

int main(){
    int n, count = 0;
    cin >> n;
    for(int i = pow(10,n-1); i <= pow(10,n);i++){
        if(check(i)){
            cout << i << " ";
            count++;
            if(count == 10){
                cout << "\n";
                count = 0;
            }
        }
    }
    cout << endl;
}

