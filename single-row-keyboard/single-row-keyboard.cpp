#include <iostream>
#include <string>
#include <unordered_map>

int calculateTime(std::string keyboard, std::string word)
{
	int count = 0, prev = 0;
	std::unordered_map<char, int> charPos;
	
	for (size_t i = 0; i < keyboard.size(); i++)
	{
		charPos[keyboard[i]] = i;
	}

	for (char c : word)
	{
		count += abs(charPos[c] - prev);
		prev = charPos[c];
	}
	
	return count;
}

int main()
{
	std::string keyboard = "pqrstuvwxyzabcdefghijklmno";
	std::string word = "leetcode";

	int x = calculateTime(keyboard, word);

	std::cout << x << "\n";

	return 0;
}
