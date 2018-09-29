// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

/// gets standard Deviation
long double StdDev(const int *preference, int start, int K)
{
	long double stdDev = 0;
	long double mean = 0;
	for (int i = 0; i < K; i++)
	{
		mean += preference[i + start];
		stdDev += preference[i + start] * preference[i + start]/K;
	}
	mean /= K;

	stdDev -= mean * mean;

	return stdDev;
}
int main()
{
	int N, K;
	std::cin >> N >> K;
	int *preference = new int[N];
	for (int i = 0; i < N; i++)
	{
		std::cin >> preference[i];
	}
	long double minStdDev = 1000000000000000000;
	for (int i = 0; i < N; i++) 
	{
		for (int j = i + K - 1; j < N; j++)
		{
			long double tempStdDev = StdDev(preference, i, j - i + 1);
			if (minStdDev > tempStdDev)minStdDev = tempStdDev;
		}
	}
	std::cout.precision(11);

	std::cout << std::sqrt(minStdDev);

	delete preference;

}

