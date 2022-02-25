#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;

//Vào trang wed : https://www.ascii-art-generator.org/ để chuyển ảnh sang file .txt


void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string ngiu;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "NHAP TEN BAN : ";
		getline(cin, ngiu);
		if (ngiu == "TRAN THI THU HIEN")
		{
			cout << "---CHINH XAC DUNG TEN BAN ROII !!!!---" << endl <<endl;
			cout << ".................." << endl;
			Sleep(1000);
			// cout << " SINH NGAY : 23/11/2002" << endl;
			cout << "LOADING 10%..." << endl; Sleep(1000);
			cout << "LOADING 20%..." << endl; Sleep(1000);
			cout << "LOADING 30%..." << endl; Sleep(1000);
			cout << "LOADING 40%..." << endl; Sleep(1000);
			cout << "LOADING 50%..." << endl; Sleep(1000);
			cout << "LOADING 60%..." << endl; Sleep(1000);
			cout << "LOADING 70%..." << endl; Sleep(1000);
			//cout << "LOADING 70%..." << endl; Sleep(1000);
			cout << "LOADING 80%..." << endl; Sleep(1000);
			cout << "LOADING 90%..." << endl; Sleep(1000);
			cout << "LOADING 100%..." << endl << endl;
			cout << "......................." << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while(true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("C:\\Users\\Administrator\\Documents\\nguoiyeu.txt", ios_base::in); //import file thì copy đường dẫn rồi đổi \ thành \\ hoặc /
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(70); 
				}
				file.close();
				//SetColor(A.at(i++ % A.size()));
				// cout << "\t\t\t\t\t\tTUYEN NGUOI YEU NHA!!!!!";
                break;
                }
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl << endl;
			system("pause");
		}
	}
}