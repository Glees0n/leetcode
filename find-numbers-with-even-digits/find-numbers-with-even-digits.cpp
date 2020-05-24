#include <iostream>
#include <vector>

int findNumbers(std::vector<int>& nums)
{
	int evenNums = 0;

	for (size_t i = 0; i < nums.size(); i++)
	{
		int count = 0;
		while (nums[i] > 0)
		{
			nums[i] /= 10;
			count++;
		}
		count % 2 == 0 ? evenNums++ : NULL;
	}

	return evenNums;
}

int main()
{
	std::vector<int> nums = { 555, 901, 482, 1771 };

	int x = findNumbers(nums);

	std::cout << x << "\n";
}
