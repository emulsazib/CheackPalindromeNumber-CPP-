//============================================================================
// Name        : CheackPalindromeNumber.cpp
// Author      : Emul Ahamed Sazib
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Variable
	int givenNumber;
	int revarsedNumber=0;
	int remainder;
	int OriginalNumber;

	//Take Input
	cout<<"Enter the Number: ";
	cin>>givenNumber;
	OriginalNumber=givenNumber;
	//Make Palindrome Number.
	while(givenNumber!=0)
	{
		remainder= givenNumber%10;
		revarsedNumber=revarsedNumber*10+remainder;
		givenNumber/=10;
	}
	//If Original and Revarsed is equal.
	if(OriginalNumber==revarsedNumber)
	{
		cout<<"This number is Palindrome";
	}else
	{
		cout<<"This number is not Palindrome";
	}

	return 0;
}
