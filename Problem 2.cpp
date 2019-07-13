#include<iostream>
#include<conio.h>

using namespace std;


void displaysort()
{
	cout << "Sorting..." << endl << endl;
}

int main()
{
	displaysort(); //will call out void 
	int size;
	int arr[100], i, j, temp;

	cout << "Enter the array size: ";
	cin >> size;
	cout << endl << "Enter the elements of the array: ";
	
	for(i = 0; i < size ; i++)
	{
		cin >> arr[i];
		cout << endl << "Your Data: "; 
		cout << arr[i]; //will display the given date by the user
	}

	cout << endl << endl << "After using Selection or Bubble sort.." << endl;

	for(i = 0; i<size; i++)
	{
		for(j = i + 1; j<size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << endl <<  "Sorted Data: " << endl;
	for(i = 0; i<size; i++)
	{
		cout << arr[i] << " "; //will display the sorted elements 
	}
	getch();
	return 0;
}
