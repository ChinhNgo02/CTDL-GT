#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	long long tu,mau;
	public: 
	    PhanSo(long long c,long long d){
		    tu=c;
		    mau=d;
	    };   
	    void rutgon(){
		    long long ULCN=__gcd(tu,mau);
            tu/=ULCN;
		    mau/=ULCN;
	    }
	    friend istream &operator>>( istream  &input, PhanSo &D ) { 
            input >> D.tu >> D.mau;
            return input;            
        }
        friend ostream &operator<<( ostream &output, PhanSo &D ) { 
            output << D.tu<<"/"<< D.mau;
            return output;            
      }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}