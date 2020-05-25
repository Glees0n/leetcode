#include <iostream>

bool isBadVersion(int version)
{
	// isBadVersion function not provided
	return true;
}

int firstBadVersion(int n) 
{
	int left = 1;
	int right = n;

	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (isBadVersion(mid))
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	
	return left;
}

int main()
{

	return 0;
}
