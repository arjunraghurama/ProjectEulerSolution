#include <iostream>
using namespace std;

int main()
{
    //Sum of multiples of 3 and 5 between 1 and 1000
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	cout << sum;
	
	return 0;
}
