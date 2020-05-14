#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
#define FILLRAND
int main()
{
	setlocale(LC_ALL, "");
#ifdef FILLRAN
	const int FillRand = 10;
	int arr[FillRand];
	for (int i = 0; i < FillRand; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < FillRand; i++)
	{
		cout << arr[i] << endl;
	}

#endif // FillRand
	const int size = 10;
	int array[size] = { 10,9,8,7,6,5,4,3,2,1 };
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int max = i + 1; max < size; max++)
		{
			if (array[max] < array[min])
				min = max;
		}
		swap(array[i], array[min]);
	}
	for (int sort = 0; sort < size; sort++)
		cout << array[sort] << " ";

	int min = array[0];
	double Sum = 0;
	for (int i = 0; i < size; i++)
		Sum = Sum + array[i];

	cout << endl << "Сумма елементов массива : " << Sum << endl;
	cout << "Среднее арифметическое елементов массива : " << (int)Sum / size << endl;
	cout << "Минимальное значение в массиве : " << min << endl;
	cout << "Максимальное значение в массиве : " << size << endl;
}

