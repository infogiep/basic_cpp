#pragma once
#include <vector>
#include <exception>
#include <memory>
#include "Message.h"
//#include "User.h"

class Chat {
public:
	bool isChatWork_ = false;
	std::vector < User> users_;
	std::vector < Message> messages_;
	std::shared_ptr < User> currentUser_ = nullptr;

	void login();
	void signUp();
	void showChat() const;
	void showAllUsersName() const;
	void addMessage();
	std::vector<User>& getAllUsers() { return users_; }
	std::vector<Message>& getAllMessages() { return messages_; }
	std::shared_ptr<User> getUserByLogin(const std::string& login) const;

public:
	void start();
	bool isChatWork() const { return isChatWork_; }
	std::shared_ptr<User> getCurrentUser() const { return currentUser_; }
	void showLoginMenu();
	void showUserMenu();
};

