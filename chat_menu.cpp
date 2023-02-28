#include "chat_menu.h"

#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include <string>

using namespace std;

//public:
int x3;
int i = 0;

//string message1;
string name_from="Alex";
string name_to = "";

//setlocale(LC_ALL, "Russian"); // задаём русский текст
//system("chcp 1251"); // настраиваем кодировку консоли

void chat_menu()
//void chat_menu(string g_name_from)
{
	int size_1 = 10, size_2 = 3;
	string** arr = new string * [size_1];
	
	for (int i = 0; i < size_1; ++i)
	{
		arr[i] = new string[size_2];
		for (int j = 0; j < size_2; ++j)
		{
			arr[i][j] = " ";
			//cout << " " << arr[i][j];
		};
	}
	
	
	do
	{
		//int i = 0;
		cout << "Just chat" << endl;
		cout << endl;
		cout << "--------------- " << endl;
		cout << "New messages 1" << endl;
		cout << "All messages 2" << endl;
		cout << "Send to one  3" << endl;
		cout << "Send to all  4" << endl;
		cout << endl;
		cout << "Exit : Input 7" << endl;
		cout << "--------------- " << endl;
				
		cin >> x3;

		switch (x3)
		case 1:
		{
			{
				//New messages 1, новые сообщения
				// chat_read_new
				cout << endl;
				cout << "New messages " << endl;
				break;
			}

		case 2:
		{
			//All messages 2, все сообщения
			//chat_read_all();
			cout << endl;
			cout << "All messages " << endl;

			// вывод
			for (int i = 0; i < size_1; ++i)
			{
				cout << " " << endl;
				for (int j = 0; j < size_2; ++j)
				{
					if (arr[i][0] != " ")
					{
						if (j == 0) { cout << "From "; };
						if (j == 1) { cout << " To "; };
						if (j == 2) { cout << " : "; };
						//cout << i << j << " " << arr[i][j];
						cout << " " << arr[i][j];
					}
				};
			}
						
			break;
		}
		case 3:
		{
			//Send to one  3, написать одному			
			cout << endl;
			cout << "Send to one  3" << endl;
						
			// создание и заполнение
			//public:
			//int size_1 = 2, size_2 = 3;

			//string** arr = new string * [size_1];

			//for (int i = 0; i < size_1; ++i)
			//{
				//arr[i] = new string[size_2];
			//i = 0;
				for (int j = 0; j < size_2; ++j)
				{
					//cout << endl;
					if (j == 0) { cout << "From " << name_from ; arr[i][j] = name_from; };
					//if (j == 1) { cout << " To "; getline(cin, arr[i][j]);};
					if (j == 1) { cout << " To "; cin>> arr[i][j]; };
					//if (j == 2) { cout << " : "; cin >> arr[i][j]; cout << endl; };
					if (j == 2) { cout << " : "; getline(cin, arr[i][j]); cout << endl; };
					//cout  << arr[i][j] << " ";
					//cout << i << j << " " << arr[i][j] << " ";
					//getline(cin, arr[i][j]);
					//cout << i << j << " " << arr[i][j] << endl;
				}
				++i;

			//}
			
			break;
		}

		case 4:
		{
			//Send to all  4, написать всем
			//chat_all();
			cout << endl;
			cout << "Send to all  4" << endl;
			name_to = "ALL";
			//cout << name_from << i << name_to << endl;

			//for (int i = 0; i < size_1; ++i)
			//{
				for (int j = 0; j < size_2; ++j)
				{
					if (j == 0) { cout << "From " << name_from; arr[i][j] = name_from; };
					if (j == 1) { cout << " To "<<name_to; arr[i][j] = name_to;};
					//if (j == 2) { cout << " : "; getline(cin, arr[i][j]); cout << endl; };
					if (j == 2) { cout << " : "; cin>> arr[i][j]; cout << endl; };
					//cout  << arr[i][j] << " ";
					//cout << i << j << " " << arr[i][j] << " arr[i][j] = name_from;
					//getline(cin, arr[i][j]);
					//cout << i << j << " " << arr[i][j] << endl;
				}
				++i;
			//}

			break;
		}

		case 7:
		{
			i = 0;
			

			break;
		}
		}
		cout << x3 << endl;
	} while (x3 != 7);

	return;
}



