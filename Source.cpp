#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[10];
	srand(time(0));
	cout << "Unsorted array:\n";
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << '\t';
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{           
		for (int j = SIZE - 1; j > i; j--)
		{     
			if (arr[j - 1] > arr[j])
			{
				int x = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = x;
			}
		}
	}
	cout << "\nSorted array:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;

	return 0;
}
