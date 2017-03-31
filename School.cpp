#include <iostream>

using namespace std;

int d(int h[], int p) {

	int n = p / 2;
	if (p == 1)
	{
		cout << h[0] << endl;
		return 0;
	}

	int *A = new int[n];
	int i = 0;
	for (int j = 0; j < p; j++)	
		if (j % 2 )
		{
			A[i] = h[j];
			i++;
		}

	d(A, n);
}


void main()
{
	int n;
	cin >> n;

	int *h = new int[n];

	for (int i = 0; i < n; i++)	
		h[i] = i+1;	

	d(h, n);
}

