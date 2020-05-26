#include <iostream>
#include <vector>

std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index)
{
	std::vector<int> target;

	for (size_t i = 0; i < nums.size(); ++i)
	{
		target.insert(target.begin() + index[i], nums[i]);
	}

	return target;
}

int main()
{
	std::vector<int> index = { 0, 1, 2, 2, 1 };
	std::vector<int> nums = { 0, 1, 2, 3, 4 };
	std::vector <int> target;

	target = createTargetArray(nums, index);

	for (size_t i = 0; i < nums.size(); ++i)
	{
		std::cout << target[i] << ", ";
	}

	return 0;
}
