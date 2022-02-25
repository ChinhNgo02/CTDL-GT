#include <iostream>

using namespace std;

long long check(long long a, long long b){
    while(b != 0){
        long long tmp = a % b;
                    a = b;
                    b = tmp;
    }
    return a;
}

long long gCM(long long a, long long b){
    return (a*b)/check(a, b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 1;
        for(long long i = 1; i <= n; i++)
        {
            sum = gCM(sum, i);
        }
        cout << sum << "\n" << endl;
    }
}