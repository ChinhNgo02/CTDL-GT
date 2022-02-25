#include<bits/stdc++.h>

using namespace std;

typedef struct {
    long long tu, mau;
}PhanSo;

void rutgon(PhanSo &A){
    long long UC = __gcd(A.tu,A.mau);
    A.tu /= UC;
    A.mau /= UC;
}

void process(PhanSo &A, PhanSo &B){
    PhanSo p;
    rutgon(A);
    rutgon(B);
    p.tu = (A.tu * B.mau + A.mau * B.tu)*(A.tu * B.mau + A.mau * B.tu);
    p.mau = (A.mau * B.mau) * (A.mau * B.mau);
    rutgon(p);
    cout << p.tu << "/" << p.mau << " ";
    PhanSo q;
    q.tu = A.tu * B.tu * p.tu;
    q.mau = A.mau * B.mau * p.mau;
    rutgon(q);
    cout << q.tu << "/" << q.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}