#include "enter_chat.h"

#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include <string>
#include "chat_menu.h"
using namespace std;

//class enter_1()
//{


void enter_chat::enter_user()
//void enter_chat::enter_user(login_, password_, name_)
{
	//public:
	string login, password, name;
	//cout << "Enter chat" << endl;
	cout << "enter your login: ";
	cin >> login;
	cout << "enter your password: ";
	cin >> password;
	//cout << "enter your name: ";
	//cin >> name;

	if (login == "Alex" and password == "123")
	{
		string g_name_from = "Alex";
		cout << endl;
		cout << "Name from : " << g_name_from << endl;
		//chat_menu;// enter to chat menu
		chat_menu chat_user;
		chat_user.chat_user();
	}
	else
	{

		if (login == "Katya" and password == "123")
		{
			string g_name_from = "Katya";
			cout << endl;
			cout << "Name from : " << g_name_from << endl;
			//chat_menu();// enter to chat menu
			chat_menu chat_user;
			chat_user.chat_user();
		}
		cout << endl;
		cout << "Wrong login or password" << endl;
		cout << endl;
	}
	//else { return; }
	//chat_menu();// enter to chat menu
	return; // name_from;
	//}
};