#include <iostream>

int subtractProductAndSum(int n)
{
	// Initialises needed variables
	int product = 1, sum = 0;

	while (n > 0)
	{
		// Takes modoulas 10 of n which results in the remainder
		product *= n % 10;
		sum += n % 10;
		// Removes the remainder digit
		n /= 10;
	}

	// Subtracts the sum from the product
	return product - sum;
}

int main()
{
	int x = subtractProductAndSum(234);

	std::cout << x << "\n";

	return 0;
}
