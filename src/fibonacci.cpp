#include <iostream>

int main()
{
	int numIn, TermA{ 0 }, TermB{ 1 }, FibSeq;

	system("CLS");

	std::cout << "======================" << std::endl;
	std::cout << "  Fibonacci Sequence  " << std::endl;
	std::cout << "======================" << std::endl;

	std::cout << "Enter the number of terms: ";
	std::cin >> numIn;

	std::cout << "Fibonacci Sequence: " << TermA << ", " << TermB << ", ";

	for (int i = 2; i < numIn; i++)
	{
		FibSeq = TermA + TermB;
		TermA = TermB;
		TermB = FibSeq;

		std::cout << FibSeq << ", ";
	}

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}
