// ConsoleApplication1.cpp : Defines the entry point for the console application.
//


#include <iostream>

using namespace std;

/**
prev_max: ha kivettuk az elozo körben az utolsot a tombbol,
akkor a tomb jelenlegi elso elemet ki kell hagynunk, egyebkent
azzal kell kezdenunk

inkabb pakoljuk egy uj tombbe

*/
int drive(int houses[], int prev_max) {

	int newsize = 0;
	if (prev_max == 1)
	{
		cout << houses[0] << endl;
		return 0;
	}
	newsize = prev_max / 2;

	int *newArray = new int[newsize];

	int i = 0;
	for (int j = 0; j < prev_max; j++)
	{
		if (j % 2 )
		{
			newArray[i] = houses[j];
			i++;
		}
	}

	drive(newArray, newsize);

}


int main()
{

	// Give number of houses
	int n;
	cin >> n;

	int *houses = new int[n];
	int prev_max = n;

	// Create array with the correct values
	for (int i = 0; i < n; i++)
	{
		houses[i] = i+1;
	}

	drive(houses, prev_max);

	//delete houses
	delete[] houses;

	return 0;

}

