#include "enter_chat.h"


#include <iostream>
#include <locale.h> 
#include <cstdlib>
#include <string>
#include "chat_menu.h"
using namespace std;

void enter_chat()
//void enter_chat(string name_from)
{
	cout << "Enter chat" << endl;

    string login, password, name;
	cout << "enter your login: ";
	cin >> login;
	cout << "enter your password: ";
	cin >> password;
	//cout << "enter your name: ";
	//cin >> name;

	if ( login=="Alex" and password=="123")
	{
		string g_name_from = "Alex";
		cout << "Name from : " << g_name_from << endl;
		chat_menu();// enter to chat menu
	}
	else 
	{

		if (login == "Katya" and password == "123")
		{
			string g_name_from = "Katya";
			cout << "Name from : " << g_name_from << endl;
			chat_menu();// enter to chat menu
		}
		cout << endl;
		cout << "Wrong login or password" << endl;
		cout << endl;
	}
	//else { return; }
	//chat_menu();// enter to chat menu
	return ; // name_from;
}