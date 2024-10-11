#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b;
	cin >> a;
	if (a == 64)
		cout<<"18446744073709551615";
	else
	{
		b = pow(2, a)-1;
		cout << b;
	}
	return 0;
}