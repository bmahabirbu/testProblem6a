/**
 ** Created by Wenchao Li
 **/


#include "findSingle.h"
#include <iostream>
using namespace std;

int findSingle(int arr[], int arr_size)
{
	int single = 0;
	int* arr2 = new int[arr_size];
	int temp;
	for (int i = 0; i < arr_size; i++)
	{
		single = 0;
		
		for (int j = 1+i; j < arr_size; j++)
		{
			if(arr[i] == arr[j])
			{
				single += 1;
			}

		}
		cout << single << endl;
		if(single == 0)
		{
			return arr[i];
		}

		

	}

}

int main()
{
	int arr[] = { 2, 3, 4, 7, 4, 4, 2, 3 };
	//int arr[] = {1, 3, 8, 8, 3, 1, 7, 5, 8, 5, 3, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The integer that occurs only once is " << findSingle(arr, n) << ".\n";
	return 0; 
}
