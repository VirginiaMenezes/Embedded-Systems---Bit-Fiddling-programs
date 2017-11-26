/* MAXIMIZING XOR ==> 	Given two integers L,R, find the maximal value of A xor B 
						where following condition is satisfied	L <= A <= B <= R
						
						Sample Input
						10
						15
						
						Sample Output
						7						
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {

    int res1=0;
    int max=0;
    for (int i=l; i<=r; i++)
    {
    	int j=i+1;
    	if (j<=r)
    	{
			res1 = i^j;
			cout << "res["<<i<<"] = "<<res1 <<endl;
			if (res1 > max)
			{
            	max = res1;
        	}
    	}
    }
    return max;

}

int main() {
    int res;
    int _l;
    cout << "L = ";
    cin >> _l;
    
    int _r;
    cout << "R = ";
	cin >> _r;
        
    res = maxXor(_l, _r);
    cout << "Max value = " << res << endl;
    
    return 0;
}

