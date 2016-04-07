////////////////////////////
//Melanie Hynden
//Homework 5, 11.3
//increase array size 

//Using same code as first problem, but add function that doubles the capacity 

#include <iostream>
using namespace std;

//reads an integer for the array size
void promptCount(int* size)
{
	cout << "How many numbers will you enter? ";
	cin >> *size;
}

//allocates the array
int* const allocArray(int size) //made a const
{
	//allocate array
	int* const pintarray = new int[size];
	//initiallize array
	for (int i = 0; i < size; i++)
	{
		pintarray[i] = 1; //initiallize to anything, I am choosing 1
		return pintarray;
	}
	
}

//reads numbers into array
void enter_numbers(int* const numbers, int size)
{
	for (int* current = numbers; current < numbers + size; current++) //for loop to allow them to enter in values 
	{
		cout << "Enter number: ";
		cin >> *current; //enter current number you want
	}
}


int* doubleCapacity(int* const list, int size) //const 
{
	int* doubleCap = new int[2*size]; //2 times the size 

	for (int i = 0; i < size; i++)
		*(doubleCap + i) = *(list + i); //using dereference operator, set memory slot equal to the original values into the new array 

	return doubleCap; 
}


int main()
{
	int numbers;
	promptCount(&numbers); //address is & 
	int* const num = allocArray(numbers); //create pointer to num so can be used later, looks cleaner
	enter_numbers(num, numbers); //use num here 
	
	doubleCapacity(num, numbers); //calling in doubleCapacity function
	int* list = new int[numbers]; //given the numbers user gives you, make array of that size

	int* doubleCapacity(int* list, int size); //set each space to the value of the previous 

	//cout double capacity stuff to check it
	for (int i = 0; i < 2 * numbers; i++)
		cout << *(num + i) << endl; 

	delete[] num;
	return 0; 
}