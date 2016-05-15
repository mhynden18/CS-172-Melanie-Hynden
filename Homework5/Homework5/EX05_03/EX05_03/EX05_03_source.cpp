/////////////////////////
//Melanie Hynden
//Homework 5, problem 3, smallest number
/////////////////////////

#include <iostream>
using namespace std;
int main()
{
	int list[8] = { 1, 2, 4, 5, 100, 2, -22 };
	int smallest = list[0];
	//access each piece in a for loop
	for (int i = 0; i < 8; i++) //until 8, since 8 elements in array
	{
		if (*(list + 1) < smallest) //if the first element is less then the "smallest", go through and check each
		{
			smallest = list[i]; //then "smallest" is that element in the array
		}
	}
	cout << "The smallest number is: " << smallest << endl;
	return 0;
}