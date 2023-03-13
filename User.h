#pragma once
#include <string>

class User
{
	std::string name_;
	std::string login_;
	std::string password_;

public:

	std::string _user_name();
	std::string _user_login();
	std::string _user_password();

	User()
	{};
	User(const std::string& user_name, const std::string& user_login, const std::string& user_password) :name_(user_name), login_(user_login), password_(user_password)

	{};

	~User()
	{

	}
	auto setUserName(const std::string& name) -> void { std::string _user_name = name; }
	auto setUserLogin(const std::string& login) -> void { std::string _user_login = login; }
	auto setUserPassword(const std::string& password) -> void { std::string _user_password = password; }


	auto getUserName() const -> const std::string& { return name_; }
	auto getUserLogin() const -> const std::string& { return login_; }
	auto getUserPassword() const -> const std::string& { return password_; }

};

