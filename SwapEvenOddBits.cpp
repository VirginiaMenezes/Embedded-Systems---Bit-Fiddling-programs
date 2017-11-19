/* SWAP ODD & EVEN BITS
 
 	Steps: 
	 		1. Extract even bits			==> EVEN = num & (0xAAAAAAAA)
	 		2. Extract odd bits				==> ODD	 = num & (0x55555555)
	 		3. Right Shift even bits		==> EVEN >> 1
	 		4. Left shift odd bits			==> ODD  << 1
	 		5. Combine even and odd bits	==> EVEN | ODD
*/
#include <iostream>
#include<stdint.h>
using namespace std;

uint32_t swap2 (uint32_t num)
{
	uint32_t even = num & (0xAAAAAAAA);
	uint32_t odd  = num & (0x55555555);
	even = even >> 1;
	odd  = odd  << 1;
	return (even|odd);
}

int main()
{
	uint32_t num = 56;
	cout << swap2(num) << endl;
	return 0;
}
