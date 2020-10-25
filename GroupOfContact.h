#pragma once
#include <string>

using namespace std;

class Group {
private:
	string name;
public:
	Group() {}
	Group(string name)
	{
		this->name = name;
	}
	string GetName()
	{
		return name;
	}
};