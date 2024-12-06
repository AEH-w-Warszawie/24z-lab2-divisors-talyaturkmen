#include <vector>
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
	std::vector<unsigned long long> result;
	for (unsigned long long i = 1; i * i <= number; ++i)
	{
		if (number % i == 0) // ensure i is divisor
		{
			result.push_back(i); // push back i since its a divisor

			if (i != number / i)
			{
				result.push_back(number / i); // Making sure that  i is not the square root of number
			}
		}
	}

	return result;
}
