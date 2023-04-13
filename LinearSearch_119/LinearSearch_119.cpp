#include <iostream>
using namespace std;


int arr[20]; // array to be searched
int n;	// number of element in the array
int i;	// index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
	}

	// accept array elements
	cout << "\----------------------\n";
	cout << "Enter array elements \n"; 
	cout << "\----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}


void linearSearch()
{
	char ch;
	int ctr;	// number of comparasions

	do
	{
		// accept the number to be searched
		cout << "\nEnter the element you want to search:"; // Langkah no 1 Algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < 0; i++)							// langkah 2, 3, dan 4 algoritma
		{
			ctr++;
			if (arr[i] == item)							//langkah no. 5 algoritma
			{
				cout << "\n" << item << " found at position " << (i = 1) << endl;
				break;
			}
		}

		if (i == n)										// langkah no.5 algoritma
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNUmber of comparisons " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch== 'y'));
}

int main()
{
	input();
	linearSearch();
}
