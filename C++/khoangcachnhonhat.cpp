#include<bits/stdc++.h>
using namespace std;

int main(){
		int test;
        cin >> test;
        while(test--){
            long long a;
            cin >> a;
            long long A[a];
            for(int i = 0; i < a;i++)
            cin >> A[i];
            sort(A, A+a);
            long long hieu = A[1]-A[0];
            for(long long i = 2; i < a;i++){
                long long tmp = A[i] - A[i-1];
                hieu = min(hieu,tmp);
            }
            cout << hieu << endl;
        }
        return 0;
	}
