#include <iostream>
#include <math.h>
using namespace std;

//Prints the prime factors of a number
void primeFactors(long long n)
{
	// Print the number of 2's that divide n 
	while (n % 2 == 0)
	{
		cout << " 2 ";
		n = n / 2;
	}

	//Check for all odd numbers that are factors of number 
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n 
		while (n%i == 0)
		{
			cout << i << " ";
			n = n / i;
		}
	}

	//Still number is not divided then itself is a prime number.
	if (n > 2)
		cout << n;
}


int main()
{
	//Number to which prime factors are to be found!
	long long n = 600851475143;
	primeFactors(n);
	return 0;
}
