#include <iostream>
#include <string>

std::string removeVowels(std::string S)
{
	std::string str = {};

	for (size_t i = 0; i < S.length(); i++)
	{
		if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
		{
			str.push_back(S[i]);
		}
	}

	return str;
}

int main()
{
	std::string S = "leetcodeisacommunityforcoders";
	std::string str;
	str = removeVowels(S);

	std::cout << str << "\n";

	return 0;
}
