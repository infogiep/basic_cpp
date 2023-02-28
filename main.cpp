#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include "chat_menu.h"

#include "enter_chat.h"
#include "registry_chat.h"
using namespace std;

// Итоговое задание Блок 1

extern int g_size_1 = 10, g_size_2 = 3;
extern string g_name_from;

int main()
{
	setlocale(LC_ALL, "Russian"); // задаём русский текст
	system("chcp 1251"); // настраиваем кодировку консоли

	//bool start = true;

	//public:
	//int x3;
	//int size_1 = 10, size_2 = 3;
	//string name_from;

	//string user_name = "Alex";
	char x = ' ';
	int x2 = 0;
	int i = 0;
	
	cout << " " << endl;
	cout << "Summary Homework Topic 1" << endl;
	cout << " " << endl;
	cout << "This is chat." << endl;
	cout << " " << endl;

	do
	{
		cout << "------------------ " << endl;
		cout << "Registry : Input 1 " << endl;
		cout << "Enter    : Input 2 " << endl;
		//cout << "Chat     : Input 3 " << endl;
		cout << endl;
		cout << "Exit     : Input 7 " << endl;
		cout << "------------------ " << endl;

		cin >> x;
		if (x == '1')
		{
			x2 = 1;
		}
		if (x == '2')
		{
			x2 = 2;
		}

		if (x == '3')
		{
			x2 = 3;
		}
		if (x == '7')
		{
			x2 = 7;
		}


		if (x2 != 7)
		{
			
		}

		switch (x2)
		case 1:
		{
			{
				//Регистрация;
				cout << "registry_chat" << endl;
				cout << " " << endl;
				registry_chat regist;
				//try {
				regist.reg_user();
				//}
				//catch (exception& e)
				//{
				//	cout << e.what();
				//}
				break;
			}

		case 2:
		{
			//Вход в chat
			enter_chat();
			cout << "enter_chat" << endl;
			cout << " " << endl;
			break;
		}
		case 3:
		{
			//Просто вход в chat
			cout << "just_chat" << endl;
			cout << " " << endl;
			//chat_menu();
			break;
		}
		case 7:
		{
			//очистка памяти
			//for (int i = 0; i < size_1; ++i)
				//for (int j = 0; j < size_2; ++j)
			//	delete[] arr[i];
			//delete[] arr;

			//start = false;

		}
		}

	} while (x != '7');
	cout << " " << endl;
	cout << " Have a nice day. See you! " << endl;
	return 0;
}