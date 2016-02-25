#include <iostream>
#include "EvenNumber.h"
using namespace std;
int main()
{
	int x = 16; //given value from the problem

	EvenNumber number;
	cout << "The even number you are starting with is " << number.getValue(x) << endl; //brings in the starting value
	cout << "The next even number is: " << number.getNext(x) << endl; // brings in the next even value
	cout << "The previous even number is: " << number.getPrevious(x) << endl; // brings in the previous even value, compared to the starting value


}