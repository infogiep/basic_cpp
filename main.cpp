#include <iostream>
#include <locale.h> 
#include <cstdlib>

#include "chat_menu.h"
#include "enter_chat.h"
#include "registry_chat.h"
using namespace std;

// Итоговое задание Блок 1

//extern int g_size_1 = 10, g_size_2 = 3;
//extern string g_name_from = "TEST";
//public:
//int g_i = 0;
//extern int i = 0;

int main()
{
	chat_menu chat;
	chat.start();
	
	chat.chat_begin();

	return 0;
}