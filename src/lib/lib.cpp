#include<vector>
#include<iostream>
#include"lib.h"

//Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.
std::vector<int> countPositivesSumNegatives(const std::vector<int> input)
{
	std::vector<int> result = { 0 , 0 };
	int counter = 0;

	for (int i = 0; i < input.size(); ++i)
	{
		if (input[i] > 0)
			++counter;
		else if (input[i] == 0)
			continue;
		else
			result.at(1) += input[i];
	}
	result.at(0) = counter;

	std::cout << "Result: ";

	for (int i = 0; i < result.size(); ++i)
		std::cout << result[i];
	std::cout << std::endl;
	return result;
}