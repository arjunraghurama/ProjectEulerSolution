// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2^1000?
// Ans : 1366


#include <iostream>
#include <math.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
	double number = pow(2, 1000);
	int sumOfDigits = 0;
	string doubleToStr = std::to_string(number);
	const char* ptr = doubleToStr.c_str();


	while (isdigit(*ptr))
	{
		sumOfDigits = sumOfDigits + (*ptr - '0');
		ptr++;
	}
	std::cout << sumOfDigits;

	return 0;
}
