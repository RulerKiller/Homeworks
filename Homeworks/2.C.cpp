#include <iostream>

using namespace std;

int main()
{

	int year, month;
	cin >> year >> month;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30";
		break;
	default:
		if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
			cout << "29";
		else
			cout << "28";
	}
	return 0;
}
