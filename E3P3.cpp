/***************************************************************************

PROBLEM 3: 

Create a C++ program which prints the letters in a char array in reverse
order and shows the size of the array.

Example:
If the array contains {'e', 'n', 'g', '1', '9', '0', '7'}, 
the output (to the terminal) should be "0179egn".

***************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	char arr[100]; // Character array declaration, 100 is a placeholder value (this is to say that it can hold a total of 100 elements)
	int number, count; // Integer declaration for number (not constant because value changes in loop), and count (responsible for changing the size of the array)
	
	cout << "Enter number of elements in Array: ";	cin >> count;
	cout << "Enter exactly " << count << " elements in Array: ";
	
	// This loop stores inputted characters in the array
	for(number = 0; number < count ; number++)	{
   		cin >> arr[number];
	}
	
	cout << "\nReverse of Array: ";

	// This loop reverses the inputted characters in the array
	for (number = count; number >= 0; number--)	{ // Logic used in reversing the characters
        cout << arr[number];
    }
	
	cout << "\nSize of Array: " << count;
	
	_getch();
    return 0;
}
