#include <iostream>

class CircleBuff
{
	int index = 0;
	int *buffer;
	int length = 0;
	int setNumber = 0;

public:
	CircleBuff(int n)
	{
		buffer = new int[n];
		length = n;
		for (int i = 0; i < n; i++)
			buffer[i] = i + 1;
	}

	void Next()
	{
		do
		{
			index = (index + 1) % length;
		} while (buffer[index] == 0 && setNumber < length);
	}

	void Set()
	{
		setNumber++;
		if (setNumber == length)
			std::cout<< buffer[index];
		buffer[index] = 0;
	}

	int Get()
	{
		return buffer[index];
	}
};

void main()
{
	int n;
	std::cin >> n;

	CircleBuff circleBuff(n);

	for (int i = 0; i < 2*n; i++)
	{
		if (i % 2 == 0)
		{
			//std::cout << circleBuff.Get() <<" ";
			circleBuff.Set();
			circleBuff.Next();
		}
		else
		{
			circleBuff.Next();
		}
	}
}

