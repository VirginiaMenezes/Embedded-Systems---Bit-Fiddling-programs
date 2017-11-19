/* BIT FLIP TO CONVERT FROM INTEGER A TO B
	
		Determine no. of bits to flip to convert A to B
		i.e.determine no. of bits different between A & B (i.e. by XOR)
*/
#include <iostream>
#include<stdint.h>
using namespace std;

int flip(uint32_t num1, uint32_t num2)
{
	int count;
	for (int i = num1^num2; i != 0; i=i>>1)
	{
		count = count + (i & 1);
	}
	return count;
}
int main()
{
	uint32_t num1 = 32;
	uint32_t num2 = 55;
	cout << flip(num1, num2);
	return 0;	
}

