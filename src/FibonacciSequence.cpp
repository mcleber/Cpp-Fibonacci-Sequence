#include <iostream>

int main()
{
	int numIn;
	long double termA{ 0 }, termB{ 1 }, fibSeq, goldenRatio;

	system("CLS");

	std::cout << "======================" << std::endl;
	std::cout << "  Fibonacci Sequence  " << std::endl;
	std::cout << "======================" << std::endl;

	std::cout << "Enter the number of terms: ";
	std::cin >> numIn;

	std::cout << "Fibonacci Sequence: " << termA << ", " << termB << ", ";

	for (int i = 2; i < numIn; ++i)
	{
		fibSeq = termA + termB;
		termA = termB;
		termB = fibSeq;

		std::cout << fibSeq << ", ";
	}

	// Golden Ratio
	std::cout << "\n\nGolden Ratio to Calculate Fibonacci Numbers";
	goldenRatio = (pow(1.618034, numIn) - pow(1 - 1.618034, numIn)) / sqrt(5);
	std::cout << "\nFor the term " << numIn << " is: " << goldenRatio << std::endl;

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}
