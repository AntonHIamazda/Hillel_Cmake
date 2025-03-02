#include"../lib/lib.h"
#include<vector>

int main()
{
	std::vector<int> input = { 1, 5, 3, 4, 3, 6, 65, 8, 9, 12, -1, -23, -16, -4, -9 };

	std::vector<int> result = countPositivesSumNegatives(input);

}