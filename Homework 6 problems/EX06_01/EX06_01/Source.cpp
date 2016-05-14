/////////////////////////////
//Melanie Hynden
//EX06_01, 12.2 Linear Search
#include <iostream>
#include <string>
using namespace std;
/*Derek-
This looks great Melanie, well done looks good 
20/20*/
template< typename T>
int linearSearch(T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}
int main()
{
	//create array of ints
	int list[] = { 1, 2, 3, 4 };
	int i = linearSearch(list, 2, 4); //should return 1
	int j = linearSearch(list, -2, 4); //should return -1
	int k = linearSearch(list, 3, 4); //should return 2
	cout << i << endl << j << endl << k << endl;
	//create array of doubles
	double list2[] = { 1.3, 5.6, 2.2, 3.3, 4.4 }; //this should be a double
	int l = linearSearch(list2, 3.3, 5); //should return 3 , three things should still be ints
	int m = linearSearch(list2, 6.6, 5); //should return -1
	int n = linearSearch(list2, 5.6, 5); //should return 1
	cout << l << endl << m << endl << n << endl;
	//create array of strings
	string list3[] = { "Hello", "Goodbye" };
	string c = "Hello";
	string x = "hi";
	string b = "Goodbye";
	int o = linearSearch(list3, c, 2);
	int p = linearSearch(list3, x, 2);
	int q = linearSearch(list3, b, 2);
	cout << o << endl << p << endl << q << endl;
}

