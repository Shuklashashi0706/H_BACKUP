// // how is -4 is stored in memory
// // 00000100 = 4
// // 1's complement
// // 11111011
// // 2's complement
// // 11111011
// // +      1
// // -------------------
// // 11111100 => this is how -4 is stored in memory
// // -------------------
// std::cout << int(char(0b11111100)) << std::endl;

// // 10001001 = x
// // -      1
// // --------
// // 10001000
// // 1's complement
// // 01110111 = 119
// // therefore, x = -119
// std::cout << int(char(0b10001001)) << std::endl;

#include <iostream>
#include <vector>
using namespace std;

long long int pow(int base, int exponent)
{
	long long int value = 1;
	for(int i = 0; i < exponent; i++)
	{
		value *= base;
	}
	return value;
}

int main()
{
	// int16_t num = 0b1000000000000000;
	int16_t num = -21020;
	long long int binary = 0;
	int i = 0;
	while (num != 0)
	{
		int bit = num & 1;
		binary += pow(10, i) * bit;
		num = num >> 1;
		if (i == 0 && num < 0)
		{
			num -= 0b1000000000000000;
		}
      i++;
	}
	std::cout << binary << std::endl;
}