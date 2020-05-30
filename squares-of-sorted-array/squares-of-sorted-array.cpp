#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSqaures(std::vector<int>& A)
{
	for (int i = 0; i < A.size(); ++i)
	{
		A[i] = A[i] * A[i];
	}

	std::sort(A.begin(), A.end());
	return A;
}

int main()
{
	std::vector<int> A = { -4, -1, 0, 3, 10 };
	std::vector<int> sorted = sortedSqaures(A);

	for (int i = 0; i < sorted.size(); ++i)
	{
		std::cout << sorted[i] << ", ";
	}

	return 0;
}
