// #include <bits/stdc++.h>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream fpo1;
//     ofstream fpo2;
//     fpo1.open("PTIT.in");
//     fpo2.open("PTIT.out");
//     while (!fpo1.eof())
//     {
//         string s;
//         getline(fpo1, s);
//         fpo2 << s << endl;
//     }
//     fpo1.close();
//     fpo2.close();
// }

// #include<bits/stdc++.h>
// #include<fstream>

// using namespace std;
// struct SV {
//     int id;
//     char name[100];
//     int age;
// };

// int main() {
//     SV sv;
//     sv.id = 1;
//     strcpy(sv.name, "Ngo Viet Chinh");
//     sv.age = 18;
//     ofstream fp1;
//     fp1.open("Nhom5.txt", ios::binary);
//     fp1.write(reinterpret_cast<char *>(&sv), sizeof(SV));
//     fp1.close();

//     ifstream fp2;
//     fp2.open("Nhom5.txt", ios::binary);
//     fp2.read(reinterpret_cast<char *>(&sv), sizeof(SV));
//     fp1.close();
//     cout << sv.id << " " << sv.name << " " << sv.age;

// }

// #include<bits/stdc++.h>
// #include<fstream>
// using namespace std;
// int main(){
// 	int n;
// 	cin >> n;
// 	cin.ignore();
// 	ofstream fp;
// 	fp.open("B.txt");
// 	// for(int i=0;i<n;i++){
// 	// 	string ten;
// 	// 	getline(cin,ten);
// 	// 	fp << ten << "\n";
// 	// }
// 	// fp.close();
//     ifstream fp1;
//     fp1.open("A.txt");
//     while(!fp.eof()) {
//         string s;
//         getline(fp, s);
//         fp1 << s << endl;
//     }
//     fp.close();
//     fp1.close();
// }
