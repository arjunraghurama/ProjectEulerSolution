/*The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <iostream>

using namespace std;

int main()
{
	//Sum of squares of first 100 natual numbers
	int n= 100, sumOfSquares = 0,  sumOfNatualNumbers=0;
	for (int i = 1; i <= n; i++)
	{
		sumOfSquares += i * i;
	}

	sumOfNatualNumbers = ( n * (n +1) )/ 2;

	int difference = (sumOfNatualNumbers*sumOfNatualNumbers) - sumOfSquares;
	cout << difference << endl;

	return 0;
}


