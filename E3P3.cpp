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
	char arr[] = {'e', 'n', 'g', '1', '9', '0', '7'}; // character array declaration
	
	// display array content in custom order as described in the instructions
	cout << arr[5]; cout << arr[3]; cout << arr[6]; cout << arr[4]; cout << arr[0]; cout << arr[2]; cout << arr[1] << endl;
	cout << "The array size is: " << sizeof(arr); // sizeof(array name) calculates the size of the array
	
	_getch();
    return 0;
}
