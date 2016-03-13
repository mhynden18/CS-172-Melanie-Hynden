#ifndef PALINDROME_H_
#define PALINDROME_H_

class Palindrome
{
private:
	string s; 
public: 
	Palindrome();
	bool isPalindrome(const string& s);
	void push(string s); //pushes it into
	int pop(); //pops it out 

};

#endif 