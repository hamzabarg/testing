#include<iostream>
using namespace std;
int main()
{
	int height;
	cout << "What do you want the height of the equilateral triangle to be : ";
	cin >> height; cout << endl;
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= height - i; j++)
			cout << "   ";
		for (int k = 1; k <= (i * 2)-1; k++)
			cout << " uwuuu ";
		cout << endl;

	}

	for (int i = 1; i <= (height*2); i++)
	{
		for (int j = 1; j <= (height * 2) - (i+1); j++)
		{
			if (j <= i)
			{
				cout << "   ";
			}
			else
			{
				cout << " uwuuu ";
			}
		}
		cout << endl;
	}



}