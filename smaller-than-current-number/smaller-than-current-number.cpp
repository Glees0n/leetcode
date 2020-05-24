#include <iostream>
#include <vector>

std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums)
{
	std::vector<int> countVec;

	for (size_t i = 0; i < nums.size(); i++)
	{
		int count = 0;
		for (size_t k = 0; k < nums.size(); k++)
		{
			if (nums[k] < nums[i])
			{
				count++;
			}
		}
		countVec.push_back(count);
	}

	return countVec;
}

int main()
{
	std::vector<int> nums = { 8, 1, 2, 2, 3 };
	std::vector<int> count;

	count = smallerNumbersThanCurrent(nums);

	for (size_t i = 0; i < count.size(); i++)
	{
		std::cout << count[i] << ", ";
	}

	return 0;
}
