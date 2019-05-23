/***************************************************************************

PROBLEM 2: 

Create a C++ Program that store temperature of Province A, Province B and 
Province C for a week (seven days) and display it. 

***************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int number; // Declaration for number, not constant because value changes in loop
	const int count = 7; // Constant declaration for the no. of days per week
    float pva[count], pvb[count], pvc[count]; // Float array declaration (each province has its own array with its size = no. of days per week)
    
    // This loop stores inputted values in Province A
    for(number = 0; number < count; number++)	{ // for initiated "number = 0," while less than the total no. of days, increment until value of count is met
		cout << "Province A, Day " << number + 1 << ": ";	cin >> pva[number]; // first loop: Province A, Day 1, second loop: Province A, Day 2, and so on
    }
    
    // This loop stores inputted values in Province B
    for(number = 0; number < count; number++)	{
		cout << "Province B, Day " << number + 1 << ": ";	cin >> pvb[number];
    }
    
    // This loop stores inputted values in Province C
    for(number = 0; number < count; number++)	{
		cout << "Province C, Day " << number + 1 << ": ";	cin >> pvc[number];
    }
    
    cout << "\n\nDisplaying values:\n" << endl;
    
    // This loop displays all the inputted values in Province A
    for(number = 0; number < count; number++)	{
		cout << "Province A, Day " << number + 1 << ": ";
		cout << pva[number] << endl; // outputs the stored value in array pva, dependent on the value of "number"
    }
    
    // This loop displays all the inputted values in Province B
    for(number = 0; number < count; number++)	{
		cout << "Province B, Day " << number + 1 << ": ";
		cout << pvb[number] << endl;
    }
    
    // This loop displays all the inputted values in Province C
    for(number = 0; number < count; number++)	{
		cout << "Province C, Day " << number + 1 << ": ";
		cout << pvc[number] << endl;
    }

	_getch();
    return 0;
}
