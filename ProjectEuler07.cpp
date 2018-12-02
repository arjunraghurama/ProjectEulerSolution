/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

// ANS 104743

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
	// Corner case 
	if (n <= 1)
		return false;

	// Check from 2 to n-1 
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;

	return true;
}

int prime10001()
{
	int primeNumberCount = 0;
	int firstPrime = 2;
	int m_prime10001 = 0;
	
	while (primeNumberCount < 10001)
	{
		if (isPrime(firstPrime))
		{
			primeNumberCount += 1;
			m_prime10001 = firstPrime;
			if (primeNumberCount == 10001)
			{
				return m_prime10001;
			}
			firstPrime += 1;
		}
		else
		{
			firstPrime += 1;
		}
	}
}

// Driver Program 
int main()
{
	int primeNumber = prime10001();
	cout << primeNumber;
	return 0;
}
