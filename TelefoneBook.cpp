// TelefoneBook.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дописать архитектуру классов телефонного справочника.

#include <iostream>
#include <string>
#include "Person.h"
#include "GroupOfContact.h"
#include "Contact.h"


using namespace std;

Contact ConsoleInputContact();

int main()
{
    Contact contact = ConsoleInputContact();
    cout << contact;
}

Contact ConsoleInputContact();
{
    string firstName, lastName, birhday, telefone, name;
    cout << "Enter first name - "; cin >> firstName;
    cout << "Enter last name - "; cin >> lastName;
    cout << "Enter birhday - "; cin >> birhday;
    cout << "Enter telefone - "; cin >> telefone;

    cout << "Enter name of Group - "; cin >> name;
    
    Group group(name);
    Person person(group, firstName, lastName, birhday, telefone);

    return person;
}

