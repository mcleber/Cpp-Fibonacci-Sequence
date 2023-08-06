#include <iostream>
#include <cmath>

// Recursive function
int fibonacci(int numIn)
{
	return (numIn <= 1) ? 1 : fibonacci(numIn - 1) + fibonacci(numIn - 2);
}

int main()
{
	system("clear || cls");

	int numIn, i;
	long double termA{1}, termB{1}, fibSeq, goldenRatio;

	std::cout << "======================" << std::endl;
	std::cout << "  Fibonacci Sequence  " << std::endl;
	std::cout << "        v.1.1         " << std::endl;
	std::cout << "======================" << std::endl;

	std::cout << "\nEnter the number of terms: ";
	std::cin >> numIn;

	{ // Recursive Function Scope
		std::cout << "\n-> Recursive scope: ";

		while (i < numIn)
		{
			std::cout << fibonacci(i);
			++i;
			std::cout << ", ";
		}
	}

	{ // For Loop Scope
		std::cout << "\n\n-> For loop scope: " << termA << ", " << termB << ", ";

		for (int i = 2; i < numIn; ++i)
		{
			fibSeq = termA + termB;
			termA = termB;
			termB = fibSeq;

			std::cout << fibSeq << ", ";
		}
	}

	{ // Golden Ratio Scope
		goldenRatio = (pow(1.618034, numIn) - pow(1 - 1.618034, numIn)) / sqrt(5);
		std::cout << "\n\n-> Golden Ratio for the term " << numIn << " is: " << goldenRatio << '\n';
	}

	std::cout << std::endl;
	return 0;
}