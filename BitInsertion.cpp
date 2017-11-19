/* BIT INSERTION AT SPECIFIC POSITIONS
 
 	Given two 32-bit Numbers, X and Y, and two bit positions a and b, 
 	write a function to insert Y into X such that Y between position a and b
 	For example: 
 		Input: X = 00100000 (32), Y = 1100 (12), a = 0, b = 4 
		Expected Output: X = 00101100 (44)

	Steps : 1.	Clear bits a to b in X  ==> to reset REG &= ~(1 << num)
			2.	Align X between a and b ==> Y =  Y << a
			3. 	Merge X and Y			==> X | Y
*/

#include <iostream>
using namespace std;

int bit_insert (int X, int Y, int a, int b)
{
	// clear bits a to b in X
	for (int i=a; i<b; i++)
	{
		X &= ~(1 << i);
	}
	
	// move Y to align between a and b
	int Y2 = Y << a;
	
	// merge X and Y
	return (X|Y);
}

int main()
{
	int X = 255;
	int Y = 12;
	int a = 0;
	int b = 4;
	int result; //should be 44
	result = bit_insert (X, Y, a, b);
	cout << result << endl;
}
