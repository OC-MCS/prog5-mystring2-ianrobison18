// member function implementations go in this file
#include <cstring>
#include "MyString.h"
using namespace std;

/*
Name: MyString
Purpose: Default constructor for the class
Parameters: None
Returns: None
*/
MyString::MyString()
{
	str = nullptr;
}

/*
Name: MyString
Purpose: Constructor for the class
Parameters: array of characters
Returns: None
*/
MyString::MyString(const char* s)
{
	int size = strlen(s) + 1;
	str = new char[size];
	strcpy_s(str, size, s);
}

/*
Name: MyString
Purpose: Copy constructor for the class
Parameters: A MyString
Returns: None
*/
MyString::MyString(const MyString& s)
{
	int size = strlen(s.str) + 1;
	str = new char[size];
	strcpy_s(str, size, s.str);
}

/*
Name: ~MyString
Purpose: A destructor: to eliminate all dynanically
allocated data in an instance of MyString
Parameters: None
Returns: None
*/
MyString::~MyString()
{
	delete[] str;
}

/*
Name: operator+
Purpose: To make ease of the + operator for the class
Parameters: another MyString
Returns: the concatenated value of the two strings
*/
MyString MyString::operator+ (MyString s)
{
	MyString newStr;
	int size = strlen(str) + strlen(s.str) + 1;
	newStr.str = new char[size];

	strcpy_s(newStr.str, size, str);
	strcat_s(newStr.str, size, s.str);
	return newStr;
}

/*
Name: operator=
Purpose: To make ease of the = operator for the class
Parameters: another MyString
Returns: A MyString
*/
MyString MyString::operator= (MyString s)
{
	if (this != &s)
	{
		delete[] str;
		int size = strlen(s.str) + 1;
		str = new char[size];
		strcpy_s(str, size, s.str);
	}
	return *this;
}

/*
Name: operator==
Purpose: To make ease of the == operator for the class
Parameters: another MyString
Returns: T/F based on if they are equal
*/
bool MyString::operator== (MyString s)
{
	int value;
	bool isEqual;

	value = strcmp(str, s.str);

	if (value == 0)
	{
		isEqual = true;
	}
	else
	{
		isEqual = false;
	}

	return isEqual;
}

/*
Name: c_str
Purpose: To return the pointer to the string
Parameters: None
Returns: the pointer to the string
*/
char* MyString::c_str() const
{
	return str;
}