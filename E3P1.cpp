/***************************************************************************

PROBLEM 1: 

Create a C++ program to show the smallest and largest integer, the total, 
and the average of an array that take 10 elements only.

***************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int number, arr[10], largest, smallest, total;
	const int count = 10; // constant declaration for the total no. of elements

    // This loop stores inputted values in the array
    for (number = 0; number < count; ++number)	{
       cout << "Enter integer " << number + 1 << " : ";
       cin >> arr[number];
    }
    
    // This loop stores the LARGEST inputted value in arr[0]
	largest = arr[0];
	for (number = 0; number < count; ++number) {
		if(largest < arr[number])
			largest = arr[number];
	}
	
	// This loop stores the SMALLEST inputted value in arr[1]
	smallest = arr[1];
	for (number = 0; number < count; ++number) {
		if(smallest > arr[number])
			smallest = arr[number];
	}
	
	// This loop stores calculates the total/sum of the inputted values in the array
	for (number = 0; number < count; ++number) {
			total += arr[number]; // read as: total = total (gets value from the array during the first loop) + array value
	}
	
	float average = total / static_cast <float> (count); // float declaration for average, static_cast used to transform integer value of "count" to float
	
	cout << "\nLargest element in array is: " << largest << endl;
	cout << "Smallest element in array is: " << smallest << endl;
	cout << "The total of array elements is: " << total << endl;
	cout << "The average of array elements is: " << average << endl;

	_getch();
    return 0;
}
