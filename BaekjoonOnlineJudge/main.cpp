///#1009

#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		int a, b;
		cin >> a >> b;
		int mod_a = a % 10;
		int mod_b = b % 4;
		switch (mod_a)
		{
		case 0:
			cout << 10 << endl;
			break;
		case 1:
		case 5:
		case 6:
			cout << mod_a << endl;
			break;
		case 2:
			switch (mod_b)
			{
			case 0:
				cout << 6 << endl;
				break;
			case 1:
				cout << 2 << endl;
				break;
			case 2:
				cout << 4 << endl;
				break;
			case 3:
				cout << 8 << endl;
				break;
			default:
				break;
			}
			break;
		case 3:
			switch (mod_b)
			{
			case 0:
				cout << 1 << endl;
				break;
			case 1:
				cout << 3 << endl;
				break;
			case 2:
				cout << 9 << endl;
				break;
			case 3:
				cout << 7 << endl;
				break;
			default:
				break;
			}
			break;
		case 4:
			switch (mod_b)
			{
			case 0:
			case 2:
				cout << 6 << endl;
				break;
			case 1:
			case 3:
				cout << 4 << endl;
				break;
			default:
				break;
			}
			break;
		case 7:
			switch (mod_b)
			{
			case 0:
				cout << 1 << endl;
				break;
			case 1:
				cout << 7 << endl;
				break;
			case 2:
				cout << 9 << endl;
				break;
			case 3:
				cout << 3 << endl;
				break;
			default:
				break;
			}
			break;
		case 8:
			switch (mod_b)
			{
			case 0:
				cout << 6 << endl;
				break;
			case 1:
				cout << 8 << endl;
				break;
			case 2:
				cout << 4 << endl;
				break;
			case 3:
				cout << 2 << endl;
				break;
			default:
				break;
			}
			break;
		case 9:
			switch (mod_b)
			{
			case 0:
			case 2:
				cout << 1 << endl;
				break;
			case 1:
			case 3:
				cout << 9 << endl;
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
	return 0;
}