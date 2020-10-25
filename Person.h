#pragma once
#include <string>
#include "GroupOfContact.h"

using namespace std;

class Person {
public:
	string birhday;
	string firstName;
	string lastName;
	string telefone;
	Person();
	Person(string firstName, string lastName, string birhday, string telefone)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->birhday = birhday;
		this->telefone = telefone;
	}
};
