#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x >= 85)
		cout << "A\n";
	else if (x >= 70)
		cout << "B\n";
	else if (x >= 60)
		cout << "C\n";
	else
		cout << "D\n";
	return 0;
}