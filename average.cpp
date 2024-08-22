#include <iostream>

int main() 
{
	double total = 0.0;
	int count = 0;
	double value;
	char answer;

	do {
		std::cout << "Enter a number: ";
		std::cin >> value;
		total += value;
		count++;

		std::cout << "Are you done? (y/n) ";
		std::cin >> answer;

		std::cout << std::endl;
	} while (answer != 'y');


	std::cout << "The average was " << (total/count) << std::endl;

	// everything is okay
	return 0;
}
