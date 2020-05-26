#include <iostream>
#include <vector>

int busyStudent(std::vector<int>& startTime, std::vector<int>& endTime, int queryTime)
{
	int count = 0;

	for (size_t i = 0; i < startTime.size(); ++i)
	{
		queryTime >= startTime[i] && queryTime <= endTime[i] ? count++ : NULL;
	}

	return count;
}

int main()
{
	std::vector<int> startTime = { 1, 1, 1, 1 };	
	std::vector<int> endTime = { 1, 3, 2, 4 };
	int queryTime = 1;
	int number = busyStudent(startTime, endTime, queryTime);

	std::cout << number << "\n";

	return 0;
}
