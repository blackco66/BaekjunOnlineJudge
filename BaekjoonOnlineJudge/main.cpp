///#2920

#include <iostream>

using namespace std;

int main() {
	int n[8];
	bool a1 = true, a2 = true;
	for (int i = 1; i <= 8; i++) {
		int temp;
		scanf("%d", &temp);
		if (temp != i)a1 = false;
		if (temp != (9 - i))a2 = false;
	}
	if (a1 == true)cout << "ascending";
	else if (a2 == true)cout << "descending";
	else cout << "mixed";
	return 0;
}