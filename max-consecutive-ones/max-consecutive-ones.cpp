#include <iostream>
#include <vector>
#include <algorithm>

int findMaxConsecutiveOnes(std::vector<int>& nums)
{
	int maxCount = 0, count = 0;

	for (int num : nums)
	{
		if (num == 1)
		{
			count++;
		}
		else
		{
			maxCount = std::max(count, maxCount);
			count = 0;
		}
	}

	maxCount = std::max(count, maxCount);
	return maxCount;
}

int main()
{
	std::vector<int> nums = { 1,1,0,1,1,1 };
	int result = findMaxConsecutiveOnes(nums);

	std::cout << result << "\n";

	return 0;
}
