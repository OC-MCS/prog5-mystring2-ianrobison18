// main goes in this file
#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

ostream& operator<< (ostream& str, MyString &other)
{
	str << other.c_str();
	return str;
}

MyString func(MyString s);
int main()
{
	MyString s1;			// String 1: starts off null
	MyString s2("Billy");	//String 2: starts with Billy
	MyString s3(s2);		//String 3: Uses copy Constructor
	cout << "Initializations: \n";
	cout << "Setting s1 to null. \n\n";
	cout << "Initializing s2: " << s2 << "\n\n";
	cout << "Copying s2 to s3: \n";
	cout << "s2 = " << s2 << "\ns3 = " << s3 << "\n\n";

	cout << "Testing Assignment operator: \n";
	// Tests assignment operator
	cout << "Setting s1 equal to s2: ";
	s1 = s2;
	cout << "\ns1 = " << s1 << "\ns2 = " << s2 << "\n\n";

	cout << "Testing Comparative operator and Additive: \n";
	// Tests comparative operator
	if (s1 == s2)
	{
		cout << "Inside if statement: if s1 == s2\n";
		cout << "s1 equals s2" << "\n\n";
	}

	// Checks addition operator
	s3 = " Bob";
	cout << "Changing s3's value to " << s3 << "\n\n";
	s1 = s2 + s3;
	cout << "s2 + s3 = s1 = " << s1 << "\n";
	cout << "s2 = " << s2 << "\ns3 = " << s3 << "\n\n";

	// Checks to comparative operator for if something isn't equal 
	if (s1 == s3)
	{
		cout << "s1 equals s3" << "\n\n";
	}
	else
	{
		cout << "Inside else statement: if s1 == s3\n";
		cout << "s1 does not equal s3" << "\n\n";
	}

	cout << "Testing Assignment operator for special cases: \n";
	// Tests if something is assigned to itself
	s1 = s1;
	cout << "s1 = s1 test: s1 = " << s1 << "\n\n";

	//Tests multiple assignments at once
	cout << "s1 = s3 = s2\n";
	s1 = s3 = s2;
	cout << s1 << " = " << s2 << " = " << s3 << "\n\n";

	s1 = func(s1);
	cout << "Outside of function. \ns1 = " << s1 << "\nFinished testing MyString.\n";
}

MyString func(MyString s)
{
	cout << "Inside a function: \ns1 = " << s << "\n"
		<< "Returning s1 to main.\n\n";
	return s;
}