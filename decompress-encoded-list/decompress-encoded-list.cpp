#include <iostream>
#include <vector>

std::vector<int> decompressList(std::vector<int>& nums)
{
	std::vector<int> decompressed;

	for (size_t i = 0; i < nums.size(); i += 2)
	{
		int num = nums[i + 1];
		int count = nums[i];
		for (int j = 0; j < count; j++)
		{
			decompressed.push_back(num);
		}
	}

	return decompressed;

}

int main()
{
	std::vector<int> initial = { 1, 2, 3, 4 };
	std::vector<int> decompressed;

	decompressed = decompressList(initial);

	for (size_t i = 0; i < decompressed.size(); i++)
	{
		std::cout << decompressed[i] << ", ";
	}

	return 0;
}
