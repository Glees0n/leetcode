#include <iostream>
#include <string>

int balancedStringSplit(std::string s) 
{
	int countL = 0;
	int countR = 0;
	int max = 0;

	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'L')
		{
			countL++;
		}
		else
		{
			countR++;
		}
		if (countL == countR)
		{
			max++;
			countL = 0;
			countR = 0;
		}
	}

	return max;
}

int main()
{
	std::string S = "RLLLLRRRLR";
	int max = balancedStringSplit(S);

	std::cout << max << "\n";

	return 0;
}
