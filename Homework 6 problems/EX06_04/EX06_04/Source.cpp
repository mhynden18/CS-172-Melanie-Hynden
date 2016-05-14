/////////////////////////////////////
//Melanie Hynden
//Homework 6, Problem 4
//Shuffle Vector 

#include <iostream>
#include <vector> //for using vectors 
#include <ctime> //for random
using namespace std;

/*Derek-
I like how you managed to get around your problem of just getting random numbers put into the array, way to think outside the box.
20/20

*/

template<typename T>
void shuffle(vector<T>& v); //declare it up here

int main()
{
	vector<int> V1; //creating the vector

	//initialize 10 ints int the vector
	V1.push_back(1); //use pushback to get all the numbers in, one at a time 
	V1.push_back(2);
	V1.push_back(3);
	V1.push_back(4);
	V1.push_back(5);
	V1.push_back(6);
	V1.push_back(7);
	V1.push_back(8);
	V1.push_back(9);
	V1.push_back(10);

	//once numbers in, shuffle them
	shuffle(V1);

	//once shuffled, output 
	for (int i = 0; i < V1.size(); i++)
	{
		cout << V1[i] << endl; 
	}

}

//shuffle function
template<typename T>
void shuffle(vector<T>& V1)
{
	//swap function with random numbers
	for (int i = 0; i < V1.size(); i++) //go up until size
	{
		int index = rand() % V1.size(); //generates random numbers
		T temp = V1[index]; 
		V1[index] = V1[i];
		V1[i] = temp; //goes through and finally swaps 
		 
	}
	

}