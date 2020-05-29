#include <iostream>
#include <vector>
#include <algorithm>

int findMaxConsecutiveOnes(std::vector<int>& nums)
{
	int count = 0, maxCount = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 1)
		{
			count++;
		}
		else
		{
			if (!(maxCount >= count))
			{
				maxCount = std::max(maxCount, count);
				count = 0;
			}
		}
	}

	return std::max(maxCount, count);
}

int main()
{
	std::vector<int> nums = { 1,1,0,1,1,1,1 };
	int max = findMaxConsecutiveOnes(nums);

	std::cout << max << "\n";

	return 0;
}
