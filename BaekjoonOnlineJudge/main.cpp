///#2846

#include <iostream>

using namespace std;
int a[1000];
int b[1000];
int main() {
	int n;
	cin >> n;
	int max = 0;
	int temp_max = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0)continue;
		b[i - 1] = a[i] - a[i - 1];
		if (b[i - 1] <= 0)temp_max = 0;
		else temp_max += b[i - 1];

		if (max < temp_max)max = temp_max;
	}
	cout << max;
	return 0;
}