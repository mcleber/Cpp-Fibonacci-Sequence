#include <iostream>

int main()
{
	long double numIn, TermA{ 0 }, TermB{ 1 }, FibSeq;

	system("CLS");

	std::cout << "======================" << std::endl;
	std::cout << "  Fibonacci Sequence  " << std::endl;
	std::cout << "======================" << std::endl;

	std::cout << "Enter the number of terms: ";
	std::cin >> numIn;

	std::cout << "Fibonacci Sequence: " << TermA << ", " << TermB << ", ";

	for (int i = 2; i < numIn; ++i)
	{
		FibSeq = TermA + TermB;
		TermA = TermB;
		TermB = FibSeq;

		std::cout << FibSeq << ", ";
	}

	// Golden Ratio
	std::cout << "\n\nGolden Ratio to Calculate Fibonacci Numbers";
	long double GoldenRatio = (pow(1.618034, numIn) - pow(1 - 1.618034, numIn)) / sqrt(5);
	std::cout << "\nFor the term " << numIn << " is: " << GoldenRatio << std::endl;

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}


/*int FibSeq[1000] {};
FibSeq[0] = 0;
FibSeq[1] = 1;

for (i = 2; i < numIn; ++i)
{
	FibSeq[i] = FibSeq[i - 1] + FibSeq[i - 2];

}
std::cout << "\nFibonacci Sequence: " << FibSeq[i];
for (i = 0; i < numIn; ++i)
{
	std::cout << FibSeq[i] << ", ";

}*/