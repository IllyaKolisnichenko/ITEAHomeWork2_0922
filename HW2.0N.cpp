#include<iostream>
#include<cstdlib>
using namespace std;

void Swap(int *array,int left, int right)
{
		int temp = *(array + left);
		*(array + left) = *(array + right);
		*(array + right) = temp;
}

void Print(int *array, const int ARRsize)
{
	for (int i = 0; i < ARRsize; i++)
	{
		cout << i << "-Element = " << *(array + i) << endl;
	}
}

int main(int argc, char** argv)
{		
	const int ARRsize = 10;
	int array[ARRsize]{};
	bool swapped = true;

	for (int i = 0; i < argc; i++)
	{
		*(array + i) = atoi(*(argv + i));
	}

	do{
		swapped = false;
		for (int i = 1; i < ARRsize; i++)
		{
			int left = i-1;
			int right = i;
			if(*(array + i-1) > *(array + i))
			{
				Swap(array, left, right);
				swapped = true;
			}
		}
	} while (swapped != false);

	Print(array, ARRsize);
	return 0;
	cout << '\n';
}
