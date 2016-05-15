/////////////////////////////
//Melanie Hynden
//11.1, Homework 5
//Analyze input

#include <iostream>
using namespace std;

//reads an integer for the array size
void promptCount(int* size)
{
	cout << "How many numbers will you enter? ";
	cin >> *size; 
}

//allocates the array
int* allocArray(int size)
{
	//allocate array
	int* pintarray = new int[size];
	//initiallize array
	for (int i = 0; i < size; i++)
	{
		pintarray[i] = 1; //initiallize to anything, I am choosing 1
		return pintarray;
	}
}

//reads numbers into array
void enter_numbers(int* numbers, int size)
{
	for (int* current = numbers; current < numbers + size; current++)
	{
		cout << "Enter number: ";
		cin >> *current; //enter current number you want
	}
}


//computes average
double computeAverage(int numbers[], int size)
{
	double average = 0; 
	double sum = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		sum += *current; //keep adding current number
	}
	average = sum / size; //average is sum divided by number of entries 
	return average; 
	
}


int computeAbove(int numbers[], int size)
{
	//to find numbers above the average
	double average = computeAverage(numbers, size); //call average function into it to use the average 
	int numsAbove = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		if (*current > average)
		{
			numsAbove++;
		}
	}
	return numsAbove;
}




int main()
{
	int numbers; 
	promptCount(&numbers); //address is & 
	int* num = allocArray(numbers); //create pointer to num so can be used later, looks cleaner
	enter_numbers(num, numbers); //use num here 
	computeAverage(num, numbers);
	computeAbove(num, numbers);

	cout << "Your average is: " << computeAverage(num, numbers) << endl;
	cout << "The numbers above the average is: " << computeAbove(num, numbers); 
}