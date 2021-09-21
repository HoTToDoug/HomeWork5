#include <iostream>

using namespace std;

double d = 0;

bool Arr( double arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = d;
		d = d + 0.1;
		cout << arr[i] << "| ";
	}
	cout << endl;
	return true;
};

int main()
{
	cout << "Quest_1: ";
	const int mysize = 10;
	double myarr[mysize] = {1};
	if (Arr(myarr, mysize))
	{
		cout << "--------------------------------------" << endl;
	};
	const int sizemass = 10;
	int mass[sizemass] = { 0, 0, 1, 1, 1, 1, 0, 1, 0, 0 };

	cout << "Quest_2: " << endl;
	cout << "Var_1: ";
	for (size_t g = 0; g < sizemass; g++)
	{
		cout << mass[g] << " ";
	};
	cout << endl;
	cout << "Var_2: ";
	for (size_t g = 0; g < sizemass; g++)
	{
		if (mass[g] == 0)
		{
			mass[g] = 1;
			cout << mass[g] << " ";
		}
		else
		{
			mass[g] = 0;
			cout << mass[g] << " ";
		}

	};
	cout << endl;
	cout << "--------------------------------------" << endl;
	cout << "Quest_3: ";
	const int sizesize = 8;
	int massive[sizesize];
	int k = 1;
	for (size_t j = 0; j < sizesize; j++)
	{
		massive[j] = k;
		k = k + 3;
		cout << massive[j] << " ";
	};
	cout << endl;
	cout << "--------------------------------------" << endl;

	return 0;
};

