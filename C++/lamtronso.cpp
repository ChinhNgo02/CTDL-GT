// #include<bits/stdc++.h>
// using namespace std;


// int main ()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		long long n;
// 		cin >> n;
// 		if (n<=10) cout << n <<endl;
// 		else 
		
// 		{	long long m=n;
// 			int b=0;
// 			while (m>0)
// 			{
// 				m=m/10;
// 				b++;
// 			}
// 			while (n>10)
// 			{
// 				int d;
// 				d=n%10;
// 				if (d>=5) n+= (10-d); 
// 				else n-= d; 
// 				n=n/10;
// 			}
// 			long long p=n*pow(10, b-1);
// 			cout << p << endl;
// 		}
// 	}
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 1)
            cout << s << endl;
        else
        {
            for (int i = s.length() - 1; i >= 1; i--)
            {
                if (s[i] >= '5')
                {
                    s[i] = '0';
                    s[i - 1]++;
                }
                else
                    s[i] = '0';
            }
            if (s[0] > '9')
            {
                s[0] = '0';
                s = "1" + s;
            }
            cout << s << endl;
        }
    }
}