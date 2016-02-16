#include <iostream>
#include <ctime>
#include <string> 
#include <cmath>

using namespace std;
void ex02();
void ex03();
void ex04();
void doubleTheInteger();
void add();
void addsOneToParameter(int n);
int num; //needed to make this a globnal variable for part e
void ex05();

void printArray(int list[], int arraySize);
void checkValue(int list[], int arraySize);


int main()
{
	ex02(); // calling the function
	ex03(); //calling function from main
	ex04(); //calling function

	int x = 1;
	cout << "before the call, x is " << x << endl;
	addsOneToParameter(x);
	cout << "after the call, x is " << x << endl;
	ex05(); //calls ex05
	return 0;
}
void ex02()
{
	bool hasPassedTest = true; //part a, define variable and initialize to true

	srand(time(NULL)); //part b, generate random numbers
	int x = rand() % 10;
	int y = rand() % 10;
	if (x >= y) // determine if x is greater than or equal to y
	{
		cout << "x is greater than or equal to y" << endl;
	}
	else
	{
		cout << "x is NOT greater than or equal to y" << endl;
	}

	int numberOfShares; //declare variable
	cout << "Enter value for Number of Shares: "; //prompt user to enter value
	cin >> numberOfShares;
	if (numberOfShares < 100) //determine if less than 100
	{
		cout << "The value is less than 100 " << endl;
	}
	else
	{
		cout << "The value is not less than 100" << endl;
	}

	int boxWidth; //declare variables
	int bookWidth;
	cout << "Enter value for box width: "; //prompt user for values
	cin >> boxWidth;
	cout << "Enter value for book width: ";
	cin >> bookWidth;
	if (boxWidth % bookWidth == 0) //use modulus to decide if evenly divisible
	{
		cout << "The box width is evenly divisible by the book width. " << endl;
	}
	else
	{
		cout << "The box width is NOT evenly divisible by the book width. " << endl;
	}

	int shelfLife; //declare variables
	int outsideTemp;
	cout << "Enter shelf life of a box of chocolate: "; //prompt user to enter values
	cin >> shelfLife;
	cout << "Enter outside temperature: ";
	cin >> outsideTemp;
	if (outsideTemp > 90) //if greater than 90 degrees outside, lowers shelflife by 4
	{
		shelfLife = shelfLife - 4;
		cout << "The modified shelf life is now" << shelfLife << "years"; //outputs new shelf life
	}
}

void ex03()
{
	double areaOfSquare; //declare variable, use doubles so that the answer can be in decimals
	cout << "Enter area of square: ";
	cin >> areaOfSquare;
	double diagonal;
	diagonal = sqrt(2 * areaOfSquare); //diagonal is square root 2 times area
	cout << diagonal;


	char answer;
	cout << "Please enter y (for yes) or n (for no):"; //prompt user for answer
	cin >> answer;
	if (answer == 'y') //if they put a y, output yes
	{
		cout << "yes" << endl;
	}
	else //otherwise they will put an n which will output no
	{
		cout << "no" << endl;
	}

	char tab = 9; //initialize tab to tab character using ASCII number 9

	string mailingAddress; //declare string variable mailingAddress
	cout << "What is your mailing address? "; //promt user for mailing address
	cin >> mailingAddress;

	string empty = ""; //initialize string to empty string, just quotes with no space between it

}
void ex04()
{

	cout << "Please enter a number between 1 and 10: ";
	cin >> num;
	while (num < 1 || num > 10) //use a loop until enter valid number
	{
		cout << "Please enter a valid number (between 1 and 10): ";
		cin >> num; //if invalid, let them try again
	}

	int sum = 0; //initialize sum to 0
	for (int i = 1; i < num + 1; i++) //use a for loop to increment
	{
		sum += (i * i * i); //i cubed and sum += so that it accumulates as it loops through
	}
	cout << sum << endl;

	//do while loop to output asterisks

	int count = 1; //initialize count to 1
	do
	{
		cout << "*"; //outputs asterisk
		count++;
	} while (count <= num); //outputs as many asterisks as the number entered

	cout << endl; //to put a space between asterisks and the first even number

	for (int i = 0; i <= 40; i++)
	{
		if ((i % 2) == 0)
		{
			cout << i << endl;
		}
	}

	doubleTheInteger(); //calling the doubleTheInteger function
	add(); //calling the add two random numbers function
}

void doubleTheInteger() //function that doubles the integer
{

	int doubleInteger = (2 * num); //2 * integer doubles it
	cout << "Double your integer is: " << doubleInteger;
	cout << endl;
}

void add()
{
	srand(time(NULL)); //to generate random numbers
	int x = rand() % 10;
	int y = rand() % 10;
	int sum = x + y; //sum of two random numbers
	cout << "the sum of the two random numbers is: " << sum;

}

void addsOneToParameter(int n) //adding one to parameter with pass by reference
{
	n++; //increments it
	cout << "n inside the function is " << n << endl;
}
void ex05()
{
	const int numberOfElements = 5; //5 elements to be entered
	int numbers[numberOfElements];
	double sum = 0;
	double product = 1; //because if start at 0 it will always multiply by zero

	for (int i = 0; i < numberOfElements; i++) //for loop so that they enter in a set amount of integers (5) 
	{
		cout << "enter a new integer: ";
		cin >> numbers[i];
		sum += numbers[i]; //calculates the sum as it goes
		product *= numbers[i]; //calculates the product as it goes
	}

	cout << "The sum is: " << sum << endl;
	cout << "The product is: " << product << endl;

	printArray(numbers, numberOfElements); //calls function below
	checkValue(numbers, numberOfElements); //calls function below
}



void printArray(int list[], int arraySize) //this array lists out the 5 numbers the user had entered
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << list[i] << " "; //couts the numbers entered with a space between each
	}
}

void checkValue(int list[], int arraySize) //this array is to compare user entered value with the numbers previously entered
{
	int numberToCheck;
	int counter = 0; //start counter at zero, so that when it is incremented it becomes less than 0 to show that there was a match
	cout << "Please enter an integer: ";
	cin >> numberToCheck;
	for (int i = 0; i < arraySize; i++)
		if (list[i] = numberToCheck)
			counter++; //shows a match
	if (counter > 0)
	{
		cout << "The number matches a value contained in the array." << endl;
	}
	else
	{
		cout << "The number does not match a value contained in the array." << endl;
	}

}