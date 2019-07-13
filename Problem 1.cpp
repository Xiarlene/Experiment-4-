#include<iostream>
#include<conio.h>

using namespace std;

void displaylist() 
{
	cout << "List of Operations: " << endl; //header
	cout << "1 = Addition" << endl;
	cout << "2 = Subtraction" << endl;
	cout << "3 = Multiply" << endl;
	cout << "4 = Divide" << endl;
	cout << "5 = Modulus" << endl;
}

	int Addition(int x, int y)
	{
		return(x+y);
	}

	int Subtraction(int x, int y)
	{
		return(x-y);
	}

	int Multiply(int x, int y)
	{
		return(x*y);
	}

	double Divide(double x, double y)
	{
		return(x/y);
	}

	int Modulus(int x, int y)
	{
		return(x%y);
	}

int main()
{
	displaylist();
	int x,y;
	int choice; 
	char ans;

	do
	{
		cout << endl << "Enter your choosen operation (1-5): "; //user will input his or her choice of operation 
		cin >> choice;
		cout << endl << endl << "Enter two integer numbers: "; //user will input two integers
		cin >> x >> y;

		switch(choice)
		{
		case 1:
			cout << endl << "Result: " << Addition(x,y);
			break;
		case 2:
			cout << endl << "Result: " << Subtraction(x,y);
			break;
		case 3:
			cout << endl << "Results: " << Multiply(x,y);
			break;
		case 4:
			cout << endl <<  "Results: " << Divide(x,y);
			break;
		case 5:
			cout << endl << "Results: " << Modulus(x,y);
			break;
		default:
			cout << endl <<  "Invalid Input" << endl;
		}

		cout << endl << endl << "Press y or Y to continue the program: "; //user has the choice to continue the program or not
		cin >> ans;
	} while ( ans == 'y' || ans == 'Y');

	getch();
	return 0;
}