///////////////////////////////
//Melanie
//Homework 6, number 2, Is Sorted
//////////////////////////////////

/*Derek- 
Why do you have the three stings under your list3? Either way looks good and does what it needs to good job
20/20
*/
#include <iostream>
using namespace std;
template< typename T>
bool selectionSort(const T list[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		//find the minimum in the list
		T currentMin = list[i];
		int currentMinIndex = i;
		for (int j = i + 1; j < arraySize; j++)
		{
			if (currentMin > list[j])
			{
				currentMin > list[j];
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i) //needed to be changed to test for order
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//create array of ints
	int list[] = { 1, 2, 3, 4 };
	cout << selectionSort(list, 4) << endl;
	//create array of doubles
	double list2[] = { 1.3, 5.6, 2.2, 3.3, 4.4 };
	cout << selectionSort(list2, 5) << endl;
	//create array of strings
	string list3[] = { "Hello", "Goodbye" };
	string c = "Hello";
	string x = "hi";
	string b = "Goodbye";
	cout << selectionSort(list3, 2) << endl;
}
