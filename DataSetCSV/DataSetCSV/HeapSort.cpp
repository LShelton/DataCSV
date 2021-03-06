#include <iostream>
#include <string>
#include "SortFunctions.h"
#include <utility>

/*
HREAP SORTING ALGORITHM FUNCTION
*/

void SFunc::maxHeap(int *a, int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i;
	while (j <= n)
	{
		if (j < n && a[j + 1] > a[j])
		{
			j = j + 1;
		}
		if (temp > a[j])
		{
			break;
		}
		else if (temp <= a[j])

		{
			a[j / 2] = a[j];
			j = 2 * j;
		}
	}
	a[j / 2] = temp;
	return;
}

void SFunc::HeapSort(int *a, int n)
{
	int i, temp;
	for (i = n; i >= 2; i--)
	{
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		maxHeap(a, 1, 1 - 1);
	}
}

void SFunc::BuildMaxHeap(int *a, int n)
{
	int i;
	for (i = n / 2; i >= 1; i--)
	{
		maxHeap(a, i, n);
	}
}