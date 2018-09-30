// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

/// gets standard Deviation
long double StdDev(const int *preference, int start, int end)
{
	int sqrSum = 0;
	int sum = 0;
	for (int i = start; i < end + 1; ++i)
	{
		sum += preference[i];
		sqrSum += preference[i] * preference[i];
	}
	long double mean = sum / (long double)(end - start + 1);
	long double stdDev = sqrSum / (long double)(end - start + 1);
	stdDev -= mean * mean;

	return sqrt(stdDev);
}
int main()
{
	int N, K;
	std::cin >> N >> K;
	int *preference =new int[N];
	for (int i = 0; i < N; i++)
	{
		std::cin >> preference[i];
	}
	long double minStdDev = 987654321;
	for (int i = 0; i < N - K + 1; ++i) 
	{
		for (int j = i + K - 1; j < N; ++j)
		{
			long double tempStdDev = StdDev(preference, i, j);
			if (minStdDev > tempStdDev)minStdDev = tempStdDev;
		}
	}
	std::cout.precision(11);

	std::cout << minStdDev << std::endl;
	delete preference;
	return 0;
}                                                      

