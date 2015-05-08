#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std; 

int main()
{ 
	cout << "fizzbuzz bench";
	//Starts the timer
	clock_t start;
	double duration; 
	start = clock();

	//Where the fizzbuzz happens
	for (int x = 1; x <= 50000; x++)
	{
		if (x % 15 == 0) 
			cout << "fizzbuzz - " << x << endl; 
		else if (x % 5 == 0) 
			cout << "buzz - " << x << endl; 
		else if (x % 3 == 0) 
			cout << "fizz - " << x << endl; 
		else 
			cout << x << endl; 
	} 
	//Stops the timer and prints result
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << "duration: " << duration << '\n';
	return 0; 
}
