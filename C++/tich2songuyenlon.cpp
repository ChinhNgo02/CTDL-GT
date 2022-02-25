// #include <bits/stdc++.h>
// #define mod 1000000007
// #define PI 3.141592653589793238
// #define a() a

// using namespace std;
 
// string multiply(string num1, string num2)
// {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     if (len1 == 0 || len2 == 0)
//     return "0";
 
//     vector<int> result(len1 + len2, 0);
 
//     int i_n1 = 0;
//     int i_n2 = 0;
     
//     for (int i=len1-1; i>=0; i--)
//     {
//         int carry = 0;
//         int n1 = num1[i] - '0';
 
//         i_n2 = 0;
                   
//         for (int j=len2-1; j>=0; j--)
//         {
//             int n2 = num2[j] - '0';
 
//             int sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
//             carry = sum/10;
 
//             result[i_n1 + i_n2] = sum % 10;
 
//             i_n2++;
//         }
 
//         if (carry > 0)
//             result[i_n1 + i_n2] += carry;
 
//         i_n1++;
//     }
 
//     int i = result.size() - 1;
//     while (i>=0 && result[i] == 0)
//     i--;
 
//     if (i == -1)
//     return "0";
 
//     string s = "";
     
//     while (i >= 0)
//         s += std::to_string(result[i--]);
 
//     return s;
// }
 
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		scanf("\n");
		
// 	    string str1;
// 	    string str2;
	    
// 		cin >> str1;
// 		cin >> str2;
		 
// 	    if((str1.at(0) == '-' || str2.at(0) == '-') &&
// 	        (str1.at(0) != '-' || str2.at(0) != '-' ))
// 	        cout<<"-";
	 
	 
// 	    if(str1.at(0) == '-')
// 	        str1 = str1.substr(1);
	   
// 	    if(str2.at(0) == '-')
// 	        str2 = str2.substr(1);
	 
// 	    cout << multiply(str1, str2) << endl;
// 	}
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
    string ten;
    string lop;
    string date;
    float gpa;
};

void nhap(struct SinhVien ds[], int n){
    for(int i = 0; i < n;i++){
        scanf("\n");
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].date;
        cin >> ds[i].gpa;
    }
}

void in(struct SinhVien ds[], int n){
    for(int i = 0; i < n;i++){
        cout << "B20DCCN" << setfill('0') << setw(3) << i+1 << " ";
        cout << ds[i].ten << " " << ds[i].lop << " ";
        if(ds[i].date[2] != '/') ds[i].date.insert(0,"0");
        if(ds[i].date[5] != '/') ds[i].date.insert(3,"0");
        cout << ds[i].date << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}