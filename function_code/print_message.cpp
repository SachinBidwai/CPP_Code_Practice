#include<iostream>
#include<string>
#include "print_message.h"
using namespace std;



string print_text_4(string& message_4)
{
	string mes_4 = "Print  message from file : print_message. " + message_4;
	return mes_4;
}