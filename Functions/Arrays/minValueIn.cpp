#include"Functions.h"


int  minValueIn(int Arr[], const int n)
{
	int min = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min < Arr[i])min = Arr[i];
	}
	return min;
}