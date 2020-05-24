#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
	std::unordered_map<int, int> map;

	for (int i = 0; i < nums.size(); i++)
	{
		int number = target - nums[i];

		if (map.find(number) != map.end())
		{
			return { map[number], i };
		}

		map[nums[i]] = i;
	}

	return { };
}

int main()
{
	std::vector<int> nums = { 5, 2, 6, 7 };
	std::vector<int> indicies;
	int target = 9;

	indicies = twoSum(nums, target);

	for (size_t i = 0; i < indicies.size(); i++)
	{
		std::cout << indicies[i] << ", ";
	}

	return 0;
}
