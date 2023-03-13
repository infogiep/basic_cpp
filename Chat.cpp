#include <iostream>
#include "Chat.h"
#include "User.h"
using namespace std;

void Chat::start()
{
	isChatWork_ = true;
}

void Chat::login()
{
	std::string login, password, login_;
	//char operation;
	do
	{
		std::cout << "Login    : ";
		std::cin >> login;
		std::cout << "Password : ";
		std::cin >> password;

		string login_ = login;

		for (auto& user : users_)
		{
			if (login == user.getUserLogin())
			{
				if (password == user.getUserPassword())
					currentUser_ = std::make_shared<User>(user);
			}
		}
		//currentUser_ = getUserByLogin(login);
		/*
		if (currentUser_ == nullptr || (password != currentUser_->getUserPassword()))
		{
			currentUser_ = nullptr;
			cout << " Wrong Login or password" << endl;
			break;
		}
		*/
	} while (!currentUser_);
}

void Chat::signUp()
{
	std::string login, password, name;
	std::cout << "Login    : ";
	std::cin >> login;
	std::cout << "Password : ";
	std::cin >> password;
	std::cout << "Name     : ";
	std::cin >> name;

	User user = User(name, login, password);
	users_.push_back(user);
	currentUser_ = std::make_shared<User>(user);
}

void Chat::showChat() const
{
	std::string from;
	std::string to;

	std::cout << " ---Chat---" << std::endl;

	for (auto& mess : messages_)
	{
		//Сообщение USER
		if (currentUser_->getUserLogin() == mess.getFrom() || currentUser_->getUserLogin() == mess.getTo() || mess.getTo() == "all")
		{
			std::cout << "Message from " << mess.getFrom() << " to " << mess.getTo() << " text: " << mess.getText() << std::endl;
		}
	}
	std::cout << "-----------------" << std::endl;
}

void Chat::showLoginMenu()
{
	currentUser_ = nullptr;
	char operation;
	do
	{
		cout << "---------------------- " << endl;
		cout << "! Enter    : Input 1 !" << endl;
		cout << "! Registry : Input 2 !" << endl;
		cout << "! ------------------ !" << endl;
		//cout << "Chat     : Input 3 !" << endl;		
		cout << "! Exit     : Input 7 !" << endl;
		cout << "---------------------- " << endl;

		std::cin >> operation;

		switch (operation)
		{
		case '1':
			login();
			break;
		case '2':
			signUp();
			break;
		case'7':
			isChatWork_ = false;

			cout << " -----------------------------" << endl;
			cout << " ! Have a nice day. See you! !" << endl;
			cout << " -----------------------------" << endl;

			break;
		default:
			std::cout << " 1 or 2 " << std::endl;
			break;
		}
	} while (!currentUser_ && isChatWork_);
}

void Chat::showUserMenu()
{
	char operation;
	std::cout << " Hi, " << currentUser_->getUserName() << std::endl;
	while (currentUser_)
	{
		cout << endl;
		cout << "------------------------" << endl;
		cout << "! Messages           1 !" << endl;
		//cout << "! Messages from User 2 !" << endl;
		cout << "! Send message       2 !" << endl;
		//cout << "! Show users         3 !" << endl;
		//cout << "! Send to all        4 !" << endl;
		cout << "! -------------------- !" << endl;
		cout << "! Exit : Input       7 !" << endl;
		cout << "------------------------" << endl;

		std::cout << std::endl
			<< ">>";
		std::cin >> operation;
		switch (operation)
		{
		case '1':
			showChat();
			break;
		case '2':
			addMessage();
			break;
		case '3':
			//showAllUsersName();
			break;
		case'7':
			currentUser_ = nullptr;
			break;
		default:
			std::wcout << "unknown choice..." << std::endl;
			break;
		}

	}
}
/*
void showAllUsersName() //const
{
	std::cout << "---Users ---" << std::endl;

	for (auto& user : Chat::users_)
	{
		std::cout << user.getUserName();

		//if (currentUser_->getUserLogin() == user.getUserLogin())
		//	std::cout << "(me)";

		std::cout << std::endl;
	}

	std::cout << "-----------" << std::endl;

}
*/


void Chat::addMessage()
{
	std::string from, to, text;
	std::cout << "To (name or all): ";
	std::cin >> to;
	std::cout << "Text: ";
	std::cin.ignore();
	getline(std::cin, text);

	from = currentUser_->getUserLogin();

	//if (to == "all")
	messages_.push_back(Message{ from, to , text });

	//std::cout << "Message from " << mess.getFrom() << " to " << mess.getTo() << " text: " << mess.getText() << std::endl;

}