///#2798

#include<iostream>
#include<string>
using namespace std;

int main() {
	int a[100];
	int max = 0;
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				int temp_max = a[i] + a[j] + a[k];
				if (temp_max > max && temp_max < m + 1)max = temp_max;
			}
		}
	}
	printf("%d", max);
	return 0;
}