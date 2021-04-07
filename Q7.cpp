#include <iostream>
using namespace std;

int main()
{
	const int MaxR = 3;
	const int MaxC = 3;
	int sum = 0;
	int arr[MaxR][MaxC] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }};

	for (int i = 0; i < MaxR; i++)
	{
		for (int k = 0; k < MaxC; k++)
		{
			if (arr[i][k] % 2 == 0)
			{
				sum = sum + arr[i][k];
			}
		}
	}

	cout << sum;

	getchar();
	return 0;

}
