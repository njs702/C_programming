#include "ch7.h"

long long sum(long long num) {
	long long sum = 0;
	for (int i = 0; i <= num; i++)
	{
		sum += i;
	}
	return sum;
}

long long oddSum(long long num) {
	int sum = 0;
	for (int i = 0; i <= num; i++)
	{	
		if (i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}