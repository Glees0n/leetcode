#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> anagramMappings(std::vector<int> A, std::vector<int> B)
{
	std::unordered_map<int, int> valToIndex;

	for (int i = 0; i < A.size(); ++i)
	{
		valToIndex[B[i]] = i;
	}

	for (int i = 0; i < A.size(); ++i)
	{
		A[i] = valToIndex[A[i]];
	}

	return A;
}

int main()
{
	std::vector<int> A = { 12, 28, 46, 32, 50 };
	std::vector<int> B = { 50, 12, 32, 46, 28 };
	std::vector<int> P;

	P = anagramMappings(A, B);
	
	for (int i = 0; i < A.size(); ++i)
	{
		std::cout << P[i] << ", ";
	}

	return 0;
}
