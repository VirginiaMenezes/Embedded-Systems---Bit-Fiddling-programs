/* Consider an array of n integers, A = [a0, a1, a2 ... an]
	where all but one of the integers occur in pairs. 
	In other words, every element in the array occurs exactly twice except for one unique element.
	Given A, find and print the unique element.
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int lonelyinteger(vector <int> a) 
{
    // 0^1=1
    int result=0;
    for (int i=0; i<a.size();i++)
	{
        result ^= a[i];
	}
    return result;
}

int main() 
{
    int n;
    cout << "Enter number of elements = " ;
    cin >> n;
    cout << "Enter numbers : " << endl;
	vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = lonelyinteger(a);
    cout << result << endl;
    return 0;
}

