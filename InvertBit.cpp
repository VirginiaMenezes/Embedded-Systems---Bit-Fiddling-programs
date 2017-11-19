/* INVERT A BIT AT A GIVEN POSITION
 	Hint: Use XOR operation ==> num ^ (1 << bit)
*/
#include <stdint.h>
#include <iostream>
using namespace std;

uint32_t invert_bit (uint32_t num, uint32_t bit)
{
	return (num ^ (1 << bit));
}
int main()
{
	uint32_t num = 170;
	uint32_t bit_pos = 2;
	cout << invert_bit(num, bit_pos) << endl;
	return 0;
}
