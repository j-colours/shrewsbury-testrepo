#include <iostream>

#define ARRAY_MAX 100
// estimate the average of the numbers in the list. The parameter 
// list is an array of doubles containing values we want to average,
// and the parameter size is the number of items stored in the list.
double computeAverage(double list[], int size) 
{
	double total = 0.0;
	for (int idx=0; idx<size; idx++) 
		total += list[idx];
	return (total/size);
}

int main() 
{
	double list[ARRAY_MAX];
	int count = 0;
	double value;
	char answer;

	do {
		std::cout << "Enter a number: ";
		std::cin >> list[count];
		count++;

		std::cout << "Are you done? (y/n) ";
		std::cin >> answer;

		std::cout << std::endl;
	} while (answer != 'y');


	std::cout << "The average was " << computeAverage(list, count) << std::endl;

	// everything is okay
	return 0;
}
