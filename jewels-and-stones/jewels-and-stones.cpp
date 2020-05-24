#include <iostream>
#include <string>

int numJewels(std::string J, std::string S)
{
	int count = 0;

	for (size_t i = 0; i < J.length(); i++)
	{
		for (size_t j = 0; j < S.length(); j++)
		{
			S[j] == J[i] ? count++ : NULL;
		}
	}

	return count;
}

int main()
{
	std::string J = "aAc";
	std::string S = "aAAccbb";

	int count;
	count = numJewels(J, S);
	
	std::cout << "Number of Jewels: " << count << "\n";

	return 0;
}
