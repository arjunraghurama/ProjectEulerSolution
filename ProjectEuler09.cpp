/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

// ANS : 31875000

#include <iostream>

using namespace std;

int pythagoreanTriplets(int limit)
{

	// triplet: a^2 + b^2 = c^2 
	int a, b, c = 0;

	// loop from 2 to max_limitit 
	int m = 2;

	// Limiting c would limit 
	// all a, b and c 
	while (c < limit) {

		// now loop on j from 1 to i-1 
		for (int n = 1; n < m; ++n) {

			// Evaluate and print triplets using 
			// the relation between a, b and c 
			a = m * m - n * n;
			b = 2 * m * n;
			c = m * m + n * n;

			if (c > limit)
				break;

			if (a + b + c == 1000)
			{
				return a * b * c;
			}
		}
		m++;
	}
}

// Driver Code 
int main()
{
	int limit = 1000;
	int prod= pythagoreanTriplets(limit);
	cout << prod;
	return 0;
}

