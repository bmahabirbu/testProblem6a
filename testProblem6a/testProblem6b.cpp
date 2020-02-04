/**
 ** Created by Wenchao Li
 **/


#include "sumProductDigit.h"
#include <iostream>
#include<cmath>

using namespace std;

int sumProductDigit(int a, int b)
{
	int digit = 0;
	int sum_digit = 0;
	int num = a * b;
	int size = trunc(log10(num)) + 1;

	
	while (size > 1)
	{
		 sum_digit = 0;
		
		for (int i = 0; i < size; i++)
		{

			digit = num / (int)pow(10, i) % 10;
			sum_digit = sum_digit + digit;
		}

		num = sum_digit;
		size = trunc(log10(sum_digit)) + 1;
		
	}
		
	
	return sum_digit;
} 

int main() {
	int a = 12;
	int b = 32;
	cout << sumProductDigit(a, b) << "\n";
	return 0;
}
