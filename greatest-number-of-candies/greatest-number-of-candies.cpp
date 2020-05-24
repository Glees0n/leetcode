#include <iostream>
#include <vector>

std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies)
{
	std::vector<bool> greatestNumber;

	int max = 0;

	for (size_t i = 0; i < candies.size(); i++)
	{
		candies[i] > max ? max = candies[i] : NULL;
	}

	for (size_t i = 0; i < candies.size(); i++)
	{
		candies[i] + extraCandies >= max ? greatestNumber.push_back(true) : greatestNumber.push_back(false);
	}

	return greatestNumber;
}

int main()
{
	std::vector<int> candies = { 2, 3, 5, 1, 3 };
	std::vector<bool> greatestNumber;
	int extraCandies = 3;

	greatestNumber = kidsWithCandies(candies, extraCandies);

	for (size_t i = 0; i < greatestNumber.size(); i++)
	{
		std::cout << greatestNumber[i] << ", ";
	}

	return 0;
}
