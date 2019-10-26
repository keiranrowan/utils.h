#include "utils.h"

void intSortA(int arr[], int n)
{
	int i, j, t;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < (n-i-1); j++)
		{
			if (arr[j] > arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}

void intSortZ(int arr[], int n)
{
	int i, j, t;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < (n-i-1); j++)
		{
			if (arr[j] < arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
}

void floatSortA(float arr[], int n)
{
        int i, j;
	float t;
        for (i = 0; i < n-1; i++)
        {
                for (j = 0; j < (n-i-1); j++)
                {
                        if (arr[j] > arr[j+1])
                        {
                                t = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = t;
                        }
                }
        }
}

void floatSortZ(float arr[], int n)
{
        int i, j;
	float t;
        for (i = 0; i < n-1; i++)
        {
                for (j = 0; j < (n-i-1); j++)
                {
                        if (arr[j] < arr[j+1])
                        {
                                t = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = t;
                        }
                }
        }
}
