#include "chat_menu.h"

#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include <string>

#include "registry_chat.h"
#include "enter_chat.h"
//#include "main.cpp"

using namespace std;

int i = 0;  // инициализация массива сообщений

void chat_menu::start()
{
	//if (start_ == false)
	//{
		//chat_menu::i = 0;
	//}
	
	//start_ = true;
	
}

void chat_menu::chat_begin()
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
	//int i = 0;  // инициализация массива сообщений

	cout << " " << endl;
	cout << "Summary Homework Topic 1 - Chat." << endl;
	cout << " " << endl;
	//cout << "This is chat." << endl;
	//cout << " " << endl;

	//chat_menu chat;
	//chat.start();

	do
	{
		cout << "---------------------- " << endl;
		cout << "! Registry : Input 1 ! " << endl;
		cout << "! Enter    : Input 2 !" << endl;
		cout << "! ------------------ !" << endl;
		//cout << "Chat     : Input 3 !" << endl;		
		cout << "! Exit     : Input 7 !" << endl;
		cout << "---------------------- " << endl;

		cin >> x;
		if (x == '1' || x == 'R' || x == 'r')
		{
			x2 = 1;
		}
		if (x == '2' || x == 'E' || x == 'e')
		{
			x2 = 2;
		}

		if (x == '3')
		{
			x2 = 3;
		}
		if (x == '7' || x == 'Q' || x == 'q')
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
			//enter_chat();
			//string g_name_from = "TEST";
			//i = 0;
			cout << "enter_chat" << endl;
			cout << " " << endl;

			enter_chat enter_user;
			enter_user.enter_user();

			break;
		}
		case 3:
		{
			//Просто вход в chat
			//cout << "just_chat" << endl;
			//cout << " " << endl;
			chat_menu chat_user;
			chat_user.chat_user();
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
	cout << " -----------------------------" << endl;
	cout << " ! Have a nice day. See you! !" << endl;
	cout << " -----------------------------" << endl;
}

void chat_menu::chat_user()
{
	//public:
	int x3 = 0;
	//int i4;
	//int i = 0;
	//if (i == 0) 
	//{
		//int i= g_i; // берём i из start
	///}
	
	//i = i4;

	//cout << "i= " << i << endl;

	string name_from = "Alex";
	string name_to = "";

	int size_1 = 10, size_2 = 3;
	string** arr = new string * [size_1];

	void arr_1();
	{
		// if 
		for (int i = 0; i < size_1; ++i)
		{
			arr[i] = new string[size_2];
			for (int j = 0; j < size_2; ++j)
			{
				arr[i][j] = " ";
			};
		}


		do
		{
			//cout << "Just chat" << endl;
			cout << endl;
			cout << "------------------------" << endl;
			cout << "! Messages to User   1 !" << endl;
			cout << "! Messages from User 2 !" << endl;
			cout << "! Send to one        3 !" << endl;
			cout << "! Send to all        4 !" << endl;
			cout << "! -------------------- !" << endl;
			cout << "! Exit : Input       7 !" << endl;
			cout << "------------------------" << endl;

			cin >> x3;

			switch (x3)
		case 1:
			{
				{
					cout << endl;
					cout << "Messages to User" << endl;

					for (int i = 0; i < size_1; ++i)
					{
						//cout << " " << endl;
						for (int j = 0; j < size_2; ++j)
						{
							if (arr[i][0] != " ")
							{
								if (arr[i][1] == "Alex" || arr[i][1] == "ALL")
								{

									if (j == 0) { cout << "From "; cout << " " << arr[i][j]; };
									if (j == 1) { cout << " To "; cout << " " << arr[i][j]; };
									if (j == 2) { cout << " : "; cout << " " << arr[i][j] << endl;; };
									//cout << " " << arr[i][j];
								}
							}
							//cout << " " << endl;
						};
					}

					break;
				}

		case 2:
		{
			cout << endl;
			cout << "Messages from User " << endl;
			for (int i = 0; i < size_1; ++i)
			{
				//cout << " " << endl;
				for (int j = 0; j < size_2; ++j)
				{
					if (arr[i][0] != " ")
					{
						if (arr[i][0] == "Alex" || arr[i][0] == "ALL")
						{
							if (j == 0) { cout << "From "; cout << " " << arr[i][j]; };
							if (j == 1) { cout << " To "; cout << " " << arr[i][j]; };
							if (j == 2) { cout << " : "; cout << " " << arr[i][j] << endl;; };
							//cout << " " << arr[i][j];
						}
					}
					//cout << " " << endl;
				};
			}

			break;
		}
		case 3:
		{
			//Send to one  3, написать одному			
			cout << endl;
			cout << "Send to one  3" << endl;

			for (int j = 0; j < size_2; ++j)
			{
				if (j == 0) { cout << "From " << name_from; arr[i][j] = name_from; };
				//if (j == 1) { cout << " To "; getline(cin, arr[i][j]);};
				if (j == 1) { cout << " To "; cin >> arr[i][j]; };
				if (j == 2) { cout << " : "; cin >> arr[i][j]; cout << endl; };
				//if (j == 2) { cout << " : "; getline(cin, arr[i][j]); cout << endl; };
			}
			++i;

			break;
		}

		case 4:
		{
			//Send to all  4, написать всем			
			cout << endl;
			cout << "Send to all  4" << endl;
			name_to = "ALL";

			for (int j = 0; j < size_2; ++j)
			{
				if (j == 0) { cout << "From " << name_from; arr[i][j] = name_from; };
				if (j == 1) { cout << " To " << name_to; arr[i][j] = name_to; };
				//if (j == 2) { cout << " : "; getline(cin, arr[i][j]); cout << endl; };
				if (j == 2) { cout << " : "; cin >> arr[i][j]; cout << endl; };
			}
			++i;
			//}

			break;
		}

		case 7:
		{
			//i = 0;
			break;
		}
			}
			//cout << x3 << endl;
			//cout << "i= " << i << endl;
			//g_i = i;
		} while (x3 != 7);
		return;
	}

};

