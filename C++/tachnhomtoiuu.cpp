// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     int a[n + 5];
//     int b[n + 5] ={0};
//     for(int i = 0; i < n;i++) cin >> a[i];
//     sort(a, a+n);
//     int count = 0,  check = 0;
//     for(int i = 0; i < n-1;i++) {
//         if((a[i+1]-a[i]) <= k ){
//             check = 1;
//         }
//         else if(check == 1) {
//             count++;
//             check = 0;
//         }
//     }
//     if(count != 0) cout << count +1 << endl;
//     else  cout << count << endl;
// }

// // 1 2 3 4 6 7 9
// //

#include<bits/stdc++.h>
using namespace std;


int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		if (n<=10) cout << n <<endl;
		else 
		
		{	long long m=n;
			int b=0;
			while (m>0)
			{
				m=m/10;
				b++;
			}
			while (n>10)
			{
				int d;
				d=n%10;
				if (d>=5) n+= (10-d); 
				else n-= d; 
				n=n/10;
			}
			long long p=n*pow(10, b-1);
			cout << p << endl;
		}
	}
}