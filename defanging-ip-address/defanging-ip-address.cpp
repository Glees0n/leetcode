#include <iostream>
#include <string>

std::string defangIPaddr(std::string address)
{
	for (size_t i = 0; i <= address.size(); i++)
	{
		if (address[i] == '.')
		{
			address.replace(i++, 1, "[.]");
		}
	}

	return address;
}

int main()
{
	std::string address = "1.1.1.1";
	std::string defanged;

	defanged = defangIPaddr(address);

	std::cout << "Original: " + address << "\n";
	std::cout << "Defanged: " + defanged << "\n";

	return 0;
}
