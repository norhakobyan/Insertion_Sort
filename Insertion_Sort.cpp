#include <iostream>

int main()
{
	const int size = 20;
	int arr[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = rand()%100;
	}

	int tmp = 0;
	int i, j;
	for (i = 1; i < size; ++i)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; --j) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
	for (int i = 0; i < size; ++i) {
		std::cout << "[" << arr[i] << "] ";
	}
	std::cout << std::endl;
}