// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int test;
//     cin >> test;
//     int h = test;
//     while(test--){
//         int a,b;
// 		cin >> a >> b;
// 		int x[100][100];
// 		int y[100][100];
// 		int z[100][100];
// 		for(int i = 0 ; i < a ; i ++){
// 			for (int j = 0 ; j < b ; j ++){
// 				cin >> x[i][j];
// 			}
// 		}
//         cout << "Test " << h - test << ":" << endl;
//         for(int i = 0 ; i < a ; i ++){
// 			for (int j = 0 ; j < b ; j ++){
// 				y[j][i] = x[i][j];
// 			}
// 		}
// 		for(int i = 0 ; i < a ; i ++){
// 			for (int j = 0 ; j < a ; j ++){
// 				for ( int k = 0 ; k < b ; k ++){
// 					z[i][j]+=x[i][k]*y[k][j];
// 				}
// 			}
// 		}
// 		for(int i = 0 ; i < a ; i ++){
// 			for (int j = 0 ; j < a ; j ++){
// 				cout << z[i][j] << " ";
// 				z[i][j] = 0;
// 			}
// 			cout << endl;
// 		} 
//     }
//     return 0;
// }
