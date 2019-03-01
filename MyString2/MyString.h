#pragma once

// MyString class declaration goes here
class MyString
{
private:
	char* str;
public:
	// Constructors and destructor
	MyString();
	MyString(const char* str);
	MyString(const MyString& other);
	~MyString();

	// Operator Functions
	MyString operator+ (MyString other);
	MyString operator= (MyString other);
	bool operator== (MyString other);

	// Get Function
	char* c_str() const;
};