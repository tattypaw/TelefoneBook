#pragma once
#include <string>
#include "GroupOfContact.h"
#include "Person.h"


using namespace std;

class Contact : public Group, Person 
{
public:
	Group group;

	Contact(string firstName, string lastName, string birhday, string telefone, Group group)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->birhday = birhday;
		this->telefone = telefone;
		this->group = group;
	}
};