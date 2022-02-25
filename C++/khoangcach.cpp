#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double x = (c-a)*(c-a) + (d-b)*(d-b);
    double kq = sqrt(x);
    cout << fixed << setprecision(4) << kq << endl;
    }
}






