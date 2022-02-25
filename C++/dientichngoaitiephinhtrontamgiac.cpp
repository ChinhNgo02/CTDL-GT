#include<bits/stdc++.h>

using namespace std;
#define PI 3.141592653589793238

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        double a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        double A = sqrt((a-c)*(a-c) + (d-b)*(d-b));
		double B = sqrt((a-e)*(a-e) + (f-b)*(f-b));
		double C = sqrt((c-e)*(c-e) + (f-d)*(f-d));
    //    cout << A << " " << B << " " << C <<endl;
        if(A + B > C && A + C > B && B + C > A){
			double p = (double)(A+B+C)/2;
            double res = p*(p-A)*(p-B)*(p-C);
            double S =sqrt(res);
            double R = (A*B*C)/(4*S);
            double kq = PI*R*R;
            cout << fixed <<setprecision(3) << kq << endl;
		}
		else cout << "INVALID" << endl;
    }
}